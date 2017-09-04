let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|0, 1000|], "title": "Building a Stateless Component."},
{"loc": [|0, 1|], "title": "Create the component template"},
{"loc": [|2, 11|], "title": "Define the make function"},
{"loc": [|4, 10|], "title": "Override the default implementation"}
|];

let make () =>
<CodeSlide code=Snippets.reactIntro ranges />