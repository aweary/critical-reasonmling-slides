external fit : ReasonReact.reactClass = "Fit" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason
    reactClass::fit
    props::(Js.Obj.empty ())
    children;