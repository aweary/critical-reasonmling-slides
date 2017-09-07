external eventToKeyboardEvent : Dom.event => Bs_webapi.Dom.KeyboardEvent.t = "%identity";

let bind reduce action => reduce (fun _ => action);

type phase =
  | Overview
  | SourceCode
  | UntypedAST
  | TypedAST
  | LambdaIR
  | Bytecode
  | ReasonML
  | BuckleScript;

let sequence = [|
  Overview,
  SourceCode,
  UntypedAST,
  TypedAST,
  LambdaIR,
  Bytecode,
  ReasonML,
  BuckleScript
|];

type state = {step: int};

type action =
  | StepForward
  | StepBackward;

let str = ReasonReact.stringToElement;

let stepBlockStyle =
  ReactDOMRe.Style.make
    backgroundColor::"grey" color::"white" padding::"20px" margin::"10px" borderRadius::"10px" ();

let activeStepBlockStyle =
  ReactDOMRe.Style.combine stepBlockStyle (ReactDOMRe.Style.make backgroundColor::"#03a9f4" ());

let reasonLogo =
  <img
    style=(
      ReactDOMRe.Style.make position::"absolute" top::"143px" left::"-120px" width::"150px" ()
    )
    src=Assets.reasonLogo
  />;

let buckleScriptLogo =
  <img
    style=(
      ReactDOMRe.Style.make position::"absolute" top::"406px" left::"-120px" width::"150px" ()
    )
    src=Assets.reasonLogo
  />;

let renderOverview () => {
  let steps =
    ReasonReact.arrayToElement (
      Js.Array.map
        (
          fun title =>
            <Layout>
              <Fill>
                <div style=activeStepBlockStyle> (ReasonReact.stringToElement title) </div>
              </Fill>
            </Layout>
        )
        [|"Source Code", "Untyped AST", "Typed AST", "Lambda IR", "Bytecode"|]
    );
  <div>
    <Heading size=4> (ReasonReact.stringToElement "The OCaml Compiler") </Heading>
    <br />
    steps
  </div>
};

let renderStandardSequence active => {
  let sequence = [|SourceCode, UntypedAST, TypedAST, LambdaIR, Bytecode|];
  let titles = [|"Source Code", "Untyped AST", "Typed AST", "Lambda IR", "Bytecode"|];
  let descriptions = [|
    "Take some OCaml source Code",
    "Do some parsing, lexing and preprocessing\nto get an untyped AST of the source Code",
    "Perform type inference and validation to get\na type-annotated version of the AST",
    "Transform that typed AST into an untyped\nIR in the form of s-expressions",
    "Do a lot of hand waving and compile the Lambda\nIR to bytecode or native"
  |];
  ReasonReact.arrayToElement (
    Js.Array.mapi
      (
        fun phase i => {
          let title = ReasonReact.stringToElement titles.(i);
          let style = phase === active ? activeStepBlockStyle : stepBlockStyle;
          let descriptionColor = phase === active ? "#333333" : "#CCCCCC";
          <Layout>
            <Fill> <div style> title </div> </Fill>
            <Fill>
              <Text textSize="30px" padding="6px" textColor=descriptionColor>
                (ReasonReact.stringToElement descriptions.(i))
              </Text>
            </Fill>
          </Layout>
        }
      )
      sequence
  )
};

let renderReasonMLStep () => {
  let sequence = [|SourceCode, ReasonML, TypedAST, LambdaIR, Bytecode|];
  let titles = [|"Source Code", "Untyped AST", "Typed AST", "Lambda IR", "Bytecode"|];
  let descriptions = [|
    "Take some OCaml source Code",
    "ReasonML provides a forked parser and lexer, with some preprocessing utilities, implementing a new syntax",
    "Perform type inference and validation to get\na type-annotated version of the AST",
    "Transform that typed AST into an untyped\nIR in the form of s-expressions",
    "Do a lot of hand waving and compile the Lambda\nIR to bytecode or native"
  |];
  let steps =
    ReasonReact.arrayToElement (
      Js.Array.mapi
        (
          fun phase i => {
            let title = ReasonReact.stringToElement titles.(i);
            let style = phase === ReasonML ? activeStepBlockStyle : stepBlockStyle;
            let descriptionColor = phase === ReasonML ? "#333333" : "#CCCCCC";
            <Layout>
              <Fill> <div style> title </div> </Fill>
              <Fill>
                <Text textSize="30px" padding="6px" textColor=descriptionColor>
                  (ReasonReact.stringToElement descriptions.(i))
                </Text>
              </Fill>
            </Layout>
          }
        )
        sequence
    );
  <div> reasonLogo steps </div>
};

let renderBuckleScriptStep () => {
  let sequence = [|SourceCode, ReasonML, TypedAST, BuckleScript, BuckleScript|];
  let titles = [|"Source Code", "Untyped AST", "Typed AST", "Lambda IR", "JavaScript"|];
  let descriptions = [|
    "Take some OCaml source Code",
    "ReasonML provides a forked parser and lexer, with some preprocessing utilities, implementing a new syntax",
    "Perform type inference and validation to get\na type-annotated version of the AST",
    "BuckleScript consumes the untyped Lambda IR using a multi-pass ..",
    "...and outputs fast, idiomatic JavaScript instead of native or bytecode!"
  |];
  let steps =
    ReasonReact.arrayToElement (
      Js.Array.mapi
        (
          fun phase i => {
            let title = ReasonReact.stringToElement titles.(i);
            let style =
              phase === ReasonML || phase === BuckleScript ? activeStepBlockStyle : stepBlockStyle;
            let descriptionColor =
              phase === ReasonML || phase == BuckleScript ? "#333333" : "#CCCCCC";
            <Layout>
              <Fill> <div style> title </div> </Fill>
              <Fill>
                <Text textSize="30px" padding="6px" textColor=descriptionColor>
                  (ReasonReact.stringToElement descriptions.(i))
                </Text>
              </Fill>
            </Layout>
          }
        )
        sequence
    );
  <div> reasonLogo buckleScriptLogo steps </div>
};

let renderSequence step => {
  let step = sequence.(step);
  switch step {
  | Overview => renderOverview ()
  | SourceCode
  | UntypedAST
  | TypedAST
  | LambdaIR
  | Bytecode => renderStandardSequence step
  | ReasonML => renderReasonMLStep ()
  | BuckleScript => renderBuckleScriptStep ()
  }
};

let component = ReasonReact.reducerComponent "CompilerPhases";

let keydownListener = ref None;

let handleKeyDown ::onArrowDown ::onArrowUp event => {
  let event = eventToKeyboardEvent event;
  switch (Bs_webapi.Dom.KeyboardEvent.code event) {
  /* Down Arrow */
  | "ArrowDown" => onArrowDown ()
  /* Up Arrow */
  | "ArrowUp" => onArrowUp ()
  /* All other keys */
  | _ => ()
  }
};

let make _children => {
  ...component,
  initialState: fun _self => {step: 0},
  reducer: fun action state =>
    switch action {
    | StepForward =>
      Js.log state;
      Js.log (Js.Array.length sequence);
      Js.log sequence;
      if (state.step < Js.Array.length sequence - 1) {
        ReasonReact.Update {step: state.step + 1}
      } else {
        ReasonReact.NoUpdate
      }
    | StepBackward =>
      if (state.step > 0) {
        ReasonReact.Update {step: state.step - 1}
      } else {
        ReasonReact.NoUpdate
      }
    },
  didMount: fun {reduce} => {
    let listener =
      handleKeyDown onArrowDown::(bind reduce StepForward) onArrowUp::(bind reduce StepBackward);
    Bs_webapi.Dom.(Document.addEventListener "keydown" listener document);
    keydownListener := Some listener;
    ReasonReact.NoUpdate
  },
  willUnmount: fun _self =>
    switch !keydownListener {
    | Some listener => Bs_webapi.Dom.(Document.removeEventListener "keydown" listener document)
    | None => /* Who cares */ ()
    },
  render: fun self => {
    let sequence = renderSequence self.state.step;
    <Slide id="ocaml-compiler-phases"> sequence </Slide>
  }
};