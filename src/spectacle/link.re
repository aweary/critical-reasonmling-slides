[@bs.module "spectacle"] external link : ReasonReact.reactClass = "Link";

let make = (~href: string, children) =>
  ReasonReact.wrapJsForReason(~reactClass=link, ~props={"href": href}, children);
