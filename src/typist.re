external typeist : ReasonReact.reactClass = "default" [@@bs.module "react-typist"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::typeist
    props::{"cursor": { "show": Js.false_ }, "avgTypingDelay": 2 }
    children;