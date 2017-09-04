external fill : ReasonReact.reactClass = "Fill" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::fill
    props::(Js.Obj.empty ())
    children;