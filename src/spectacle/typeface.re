/* open Types; */
external typeface : ReasonReact.reactClass = "Typeface" [@@bs.module "spectacle"];

let make googleFont::(googleFont: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::typeface
    props::{ "googleFont": googleFont }
    children;