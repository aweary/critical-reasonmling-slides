external layout : ReasonReact.reactClass = "Layout" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::layout
    props::(Js.Obj.empty ())
    children;