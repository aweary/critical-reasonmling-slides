[@bs.module "spectacle"] external deck : ReasonReact.reactClass = "Deck";

let make =
    (
      ~theme: Theme.t,
      /* I'm defaulting to no controls, but the JS spectacle API defaults to having them on */
      ~controls: bool=false,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=deck,
    ~props={
      "theme": theme,
      "controls": Js.Boolean.to_js_boolean(controls),
      "progress": "none",
      "contentWidth": 1300
    },
    children
  );
