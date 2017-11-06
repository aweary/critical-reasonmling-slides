type range = {. "loc": Js.Array.t(int)};

[@bs.module] external codeSlide : ReasonReact.reactClass = "spectacle-code-slide";

let make = (~code: string, ~ranges: Js.Array.t(range), _children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=codeSlide,
    ~props={"code": code, "lang": "reason", "ranges": ranges},
    [||]
  );
