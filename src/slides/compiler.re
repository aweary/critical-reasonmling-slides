/* Alias Text before the Bs_webapi.Dom open nukes it */
module Text' = Text;

open Bs_webapi.Dom;

type actions =
  | StepSlideForward
  | StepSlideBack;

type state = {
  step: int,
  listener: ref (option (Dom.event => unit))
};

external eventToKeyboardEvent : Dom.event => KeyboardEvent.t = "%identity";

let component = ReasonReact.reducerComponent "CompilerSteps";

let stepBlockStyle =
  ReactDOMRe.Style.make
    backgroundColor::"grey"
    color::"white"
    padding::"20px"
    margin::"10px"
    borderRadius::"10px"
    transitionDuration::"250ms"
    ();

let activeStepBlockStyle =
  ReactDOMRe.Style.combine stepBlockStyle (ReactDOMRe.Style.make backgroundColor::"#03a9f4" ());

let steps = [|"Source Code", "Untyped AST", "Typed AST", "Lambda IR", "Bytecode"|];

let descriptions = [|
  "Take some OCaml source Code",
  "Do some parsing, lexing and preprocessing\nto get an untyped AST of the source Code",
  "Perform type inference and validation to get\na type-annotated version of the AST",
  "Transform that typed AST into an untyped\nIR in the form of s-expressions",
  "Do a lot of hand waving and compile the Lambda\nIR to bytecode or native"
|];

let handleKeyDown ::onArrowDown ::onArrowUp event => {
  let event = eventToKeyboardEvent event;
  switch (KeyboardEvent.code event) {
  /* Down Arrow */
  | "ArrowDown" => onArrowDown ()
  /* Up Arrow */
  | "ArrowUp" => onArrowUp ()
  /* All other keys */
  | _ => ()
  }
};

let renderSteps activeIndex element index => {
  /* The first step renders all the steps as active */
  let isActive = activeIndex == 0 || activeIndex == index + 1;
  let blockStyle = isActive ? activeStepBlockStyle : stepBlockStyle;
  let descriptionColor = isActive ? "#333333" : "#CCCCCC";
  let description =
    activeIndex == 0 ?
      ReasonReact.nullElement :
      <Fill>
        <Text' textSize="25px" padding="6px" textColor=descriptionColor>
          (ReasonReact.stringToElement descriptions.(index))
        </Text'>
      </Fill>;
  <Layout> <Fill> <div style=blockStyle> element </div> </Fill> description </Layout>
};

let make _children => {
  ...component,
  initialState: fun () => {step: 0, listener: ref (None: option (Dom.event => unit))},
  reducer: fun action state =>
    switch action {
    | StepSlideForward =>
      if (state.step < Js.Array.length steps) {
        ReasonReact.Update {...state, step: state.step + 1}
      } else {
        ReasonReact.NoUpdate
      }
    | StepSlideBack =>
      /* Only step backwards if there is a previous slide */
      if (state.step > 0) {
        ReasonReact.Update {...state, step: state.step - 1}
      } else {
        ReasonReact.NoUpdate
      }
    },
  didMount: fun {state, reduce} => {
    let handleArrowDown = reduce (fun _ => StepSlideForward);
    let handleArrowUp = reduce (fun _ => StepSlideBack);
    let listener = handleKeyDown onArrowDown::handleArrowDown onArrowUp::handleArrowUp;
    state.listener := Some listener;
    Document.addEventListener "keydown" listener document;
    ReasonReact.NoUpdate
  },
  willUnmount: fun {state} => {
    let listener = Js.Option.getExn !state.listener;
    Document.removeEventListener "keydown" listener document
  },
  render: fun self => {
    let title = ReasonReact.stringToElement ("Compiler Step #" ^ string_of_int self.state.step);
    let steps =
      steps |> Js.Array.map ReasonReact.stringToElement |>
      Js.Array.mapi (renderSteps self.state.step) |> ReasonReact.arrayToElement;
    <Slide id="compiler-steps"> <h1> title </h1> steps </Slide>
  }
};