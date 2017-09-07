let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|0, 1000|]},
{"loc": [|0, 1|]},
{"loc": [|2, 11|]},
{"loc": [|4, 10|]}
|];

let make () =>
<CodeSlide code=Snippets.reactIntro ranges />