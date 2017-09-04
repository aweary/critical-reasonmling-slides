external link : ReasonReact.reactClass = "Link" [@@bs.module "spectacle"];

let make href::(href: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::link
    props::{ "href": href }
    children;