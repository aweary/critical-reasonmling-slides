external deck : ReasonReact.reactClass = "Slide" [@@bs.module "spectacle"];

let make
  id::(id: string)
  align::(align: string)="center center" maxWidth::(maxWidth: string)="1000px" children => {
  let style = ReactDOMRe.Style.make maxWidth::maxWidth left::"0px" right::"0px" margin::"auto" ();
  ReasonReact.wrapJsForReason
    reactClass::deck
    props::{ "align": align, "id": id, "style": style }
    children;
  };