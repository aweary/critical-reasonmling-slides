[@bs.module "spectacle"] external listItem : ReasonReact.reactClass = "ListItem";

let make = (children) =>
  ReasonReact.wrapJsForReason(~reactClass=listItem, ~props=Js.Obj.empty(), children);
