let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|0, 1000|]},
{"loc": [|0, 3|]},
{"loc": [|4, 5|]},
{"loc": [|6, 12|]},
{"loc": [|9, 11|]},
|];


let make () =>
  <SlideSet>
    <Slide id="variants">
      <Heading size=1> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=2> (ReasonReact.stringToElement "Variants") </Heading>
    </Slide>
    <CodeSlide code=Snippets.patternMatching ranges />
    <Slide id="pattern-matching-error">
      <Code highlight="8" source=Snippets.patternMatchingError />
      <ErrorBox
        message="Warning 8: this pattern-matching is not exhaustive.                                                                                                           Here is an example of a value that is not matched:\n      Director"
      />
    </Slide>
  </SlideSet>;