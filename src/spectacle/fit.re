[@bs.module "spectacle"] external fit : ReasonReact.reactClass = "Fit";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=fit, ~props=Js.Obj.empty(), children);
