[@bs.val] [@bs.scope "Prism"] external highlightAll : unit => unit = "";

let component = ReasonReact.statelessComponent("Code");

let make = (~highlight="", ~textSize="", ~source, _children) => {
  ...component,
  didMount: (_self) => {
    highlightAll();
    ReasonReact.NoUpdate
  },
  render: (_self) =>
    ReasonReact.cloneElement(
      <pre className="language-reason" />,
      ~props={"data-line": highlight, "style": ReactDOMRe.Style.make(~fontSize=textSize, ())},
      [|<code className="language-reason"> (ReasonReact.stringToElement(source)) </code>|]
    )
};
