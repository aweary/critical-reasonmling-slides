external text : ReasonReact.reactClass = "Text" [@@bs.module "spectacle"];

let make
    textSize::(textSize: string)=""
    textColor::(textColor: string)=""
    padding::(padding: string)=""
    fit::(fit: Js.boolean)=Js.false_
    children =>
  ReasonReact.wrapJsForReason
    reactClass::text
    props::{"fit": fit, "textSize": textSize, "padding": padding, "textColor": textColor}
    children;