type range = Js.t {. loc: Js.Array.t int };
external codeSlide : ReasonReact.reactClass = "spectacle-code-slide" [@@bs.module];

let make code::(code: string) ranges::(ranges: Js.Array.t range) _children =>
  ReasonReact.wrapJsForReason
    reactClass::codeSlide
    props::{"code": code, "lang": "reason", "ranges": ranges}
    [||]