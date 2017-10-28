[@bs.module "spectacle"] external slide : ReasonReact.reactClass = "SlideSet";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=slide, ~props=Js.Obj.empty(), children);
