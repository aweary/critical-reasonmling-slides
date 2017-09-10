let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|1, 15|]},
{"loc": [|2, 7|]},
{"loc": [|8, 11|]},
{"loc": [|12, 13|]}
|];

let make () =>
<SlideSet>
  <Slide id="basics">
    <Heading size=1>(ReasonReact.stringToElement "The Basics")</Heading>
    <Heading size=4>(ReasonReact.stringToElement "By Example")</Heading>
  </Slide>
  <CodeSlide code=Snippets.basics ranges />
</SlideSet>;