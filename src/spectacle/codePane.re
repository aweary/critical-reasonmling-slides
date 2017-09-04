/* open Types; */
external codePane : ReasonReact.reactClass = "CodePane" [@@bs.module "spectacle"];

let make
  lang::(lang: string)
  source::(source: string)
  textSize::(textSize: string)
  children =>
    ReasonReact.wrapJsForReason
      reactClass::codePane
      props::{ "lang": lang, "source": source, "textSize": textSize }
      children;