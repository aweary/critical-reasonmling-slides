[@bs.module "spectacle"] external layout : ReasonReact.reactClass = "Layout";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=layout, ~props=Js.Obj.empty(), children);
