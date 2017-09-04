external appear : ReasonReact.reactClass = "Appear" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::appear
    props::(Js.Obj.empty ())
    children;