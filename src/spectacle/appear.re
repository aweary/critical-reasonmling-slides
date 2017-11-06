[@bs.module "spectacle"] external appear : ReasonReact.reactClass = "Appear";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=appear, ~props=Js.Obj.empty(), children);
