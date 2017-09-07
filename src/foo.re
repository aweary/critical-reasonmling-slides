let component = ReasonReact.statelessComponent "FunctionChild";

let make children => {
  ...component,
  render: fun _self => {
    let greeting = "Hello, foo";
    <div>
      (ReasonReact.stringToElement greeting)
      children
    </div>
  }
};