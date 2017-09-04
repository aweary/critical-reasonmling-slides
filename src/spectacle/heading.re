/* open Types; */
external heading : ReasonReact.reactClass = "Heading" [@@bs.module "spectacle"];

let make size::(size: int)=1 textSize::(textSize: string)="" children =>
  ReasonReact.wrapJsForReason
    reactClass::heading props::{"size": size, "textSize": textSize} children;