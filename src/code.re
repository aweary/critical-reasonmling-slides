external highlightAll : unit => unit = "" [@@bs.val] [@@bs.scope "Prism"];

let component = ReasonReact.statelessComponent "Code";

let make ::highlight="" ::textSize="" ::source _children => {
  ...component,
  didMount: fun _self => {
    highlightAll ();
    ReasonReact.NoUpdate
  },
  render: fun _self =>
    ReasonReact.cloneElement
      <pre className="language-reason" />
      props::{"data-line": highlight, "style": ReactDOMRe.Style.make fontSize::textSize ()}
      [|<code className="language-reason"> (ReasonReact.stringToElement source) </code>|]
};