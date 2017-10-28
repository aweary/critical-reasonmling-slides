[@bs.module "spectacle"] external fill : ReasonReact.reactClass = "Fill";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=fill, ~props=Js.Obj.empty(), children);
