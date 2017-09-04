external deck : ReasonReact.reactClass = "Slide" [@@bs.module "spectacle"];

let make
  id::(id: string)
  align::(align: string)="center center" children =>
  ReasonReact.wrapJsForReason
    reactClass::deck
    props::{ "align": align, "id": id }
    children;