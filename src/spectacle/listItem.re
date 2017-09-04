external listItem : ReasonReact.reactClass = "ListItem" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::listItem
    props::(Js.Obj.empty ())
    children;