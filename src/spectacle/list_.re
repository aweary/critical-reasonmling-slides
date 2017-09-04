external list : ReasonReact.reactClass = "List" [@@bs.module "spectacle"];

let make textSize::(textSize: string)="" children =>
  ReasonReact.wrapJsForReason
    reactClass::list
    props::({ "textSize": textSize })
    children;