let component = ReasonReact.statelessComponent "BuckleScriptCompilerSteps";

let steps = [|"Source Code", "ReasonML", "Typed AST", "BuckleScript", "JavaScript"|];

let descriptions = [|
  "Take some OCaml source Code",
  "Reason provides an augmented parser and lexer",
  "Perform type inference and validation to get\na type-annotated version of the AST",
  "Transform that typed AST into an untyped\nIR in the form of s-expressions",
  "Do a lot of hand waving and compile the Lambda\nIR to bytecode or native"
|];

let getActiveStyle element => {
  let activeColor = switch element {
  | "ReasonML" => "#db4d3f"
  | "BuckleScript" | "JavaScript" => "orange"
  | _ => "#03a9f4"
  };
  ReactDOMRe.Style.combine Compiler.stepBlockStyle (ReactDOMRe.Style.make backgroundColor::activeColor ());
};


let renderSteps element index => {
  /* The first step renders all the steps as active */
  let isActive = element === "ReasonML" || element === "BuckleScript" || element === "JavaScript";
  let blockStyle = isActive ? (getActiveStyle element) : Compiler.stepBlockStyle;
  let descriptionColor = isActive ? "#333333" : "#CCCCCC";
  <Layout> <Fill> <div style=blockStyle> (ReasonReact.stringToElement element) </div> </Fill> <Fill>
  <Text textSize="25px" padding="6px" textColor=descriptionColor>
    (ReasonReact.stringToElement descriptions.(index))
  </Text>
</Fill> </Layout>
};

let make _children => {
  ...component,
  render: fun _self => {
    let title = ReasonReact.stringToElement ("ReasonML");
    let steps =
      steps |> Js.Array.mapi (renderSteps) |> ReasonReact.arrayToElement;
    <Slide id="compiler-steps"> <h1> title </h1> steps </Slide>
  }
};