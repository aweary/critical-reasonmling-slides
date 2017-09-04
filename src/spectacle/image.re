external image : ReasonReact.reactClass = "Image" [@@bs.module "spectacle"];

let make src::(src: string) width::(width: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::image
    props::{ "src": src, "width": width }
    children;