[@bs.module "spectacle"] external image : ReasonReact.reactClass = "Image";

let make = (~src: string, ~width: string, children) =>
  ReasonReact.wrapJsForReason(~reactClass=image, ~props={"src": src, "width": width}, children);
