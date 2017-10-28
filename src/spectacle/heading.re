/* open Types; */
[@bs.module "spectacle"] external heading : ReasonReact.reactClass = "Heading";

let make = (~size: int=1, ~textSize: string="", children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=heading,
    ~props={"size": size, "textSize": textSize},
    children
  );
