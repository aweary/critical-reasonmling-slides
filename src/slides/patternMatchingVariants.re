let make () =>
  <SlideSet>
    <Slide id="variants">
      <Heading size=1>(ReasonReact.stringToElement "Pattern Matching")</Heading>
      <Heading size=2>(ReasonReact.stringToElement "Variants")</Heading>
    </Slide>
    <Slide id="pattern-matching-variants">
      <Code source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-1">
      <Code highlight="1-4" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-2">
      <Code highlight="6-12" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-3">
      <Code highlight="10-11" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-error">
      <Code highlight="7" source=Snippets.patternMatchingError />
      <ErrorBox message="Warning 8: this pattern-matching is not exhaustive.                                                                                                           Here is an example of a value that is not matched:
      Director" />
    </Slide>
  </SlideSet>;