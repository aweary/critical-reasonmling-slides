let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|0, 40|]},
{"loc": [|0, 1|]},
{"loc": [|2, 3|]},
{"loc": [|4, 5|]},
{"loc": [|6, 40|]},
{"loc": [|8, 9|]},
{"loc": [|9, 16|]},
{"loc": [|9, 10|]},
{"loc": [|11, 15|]},
{"loc": [|16, 40|]},
{"loc": [|18, 20|]},
{"loc": [|22, 23|]},
{"loc": [|25, 26|]},
|];

let make () =>
<CodeSlide code=Snippets.reducerComponent ranges />