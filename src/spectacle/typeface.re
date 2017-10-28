/* open Types; */
[@bs.module "spectacle"] external typeface : ReasonReact.reactClass = "Typeface";

let make = (~googleFont: string, children) =>
  ReasonReact.wrapJsForReason(~reactClass=typeface, ~props={"googleFont": googleFont}, children);
