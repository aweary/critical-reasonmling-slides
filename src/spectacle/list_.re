[@bs.module "spectacle"] external list : ReasonReact.reactClass = "List";

let make = (~textSize: string="", children) =>
  ReasonReact.wrapJsForReason(~reactClass=list, ~props={"textSize": textSize}, children);
