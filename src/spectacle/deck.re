external deck : ReasonReact.reactClass = "Deck" [@@bs.module "spectacle"];

let make
    theme::(theme: Theme.t)
    /* I'm defaulting to no controls, but the JS spectacle API defaults to having them on */
    controls::(controls: bool)=false
    children =>
  ReasonReact.wrapJsForReason
    reactClass::deck
    props::{"theme": theme, "controls": Js.Boolean.to_js_boolean controls, "progress": "none"}
    children;