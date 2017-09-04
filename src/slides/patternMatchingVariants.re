let make () =>
  <SlideSet>
    <Slide id="pattern-matching-variants">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-error">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code source=Snippets.patternMatchingError />
      <ErrorBox message="Warning 8: this pattern-matching is not exhaustive.                                                                                                           Here is an example of a value that is not matched:
      Blue" />
    </Slide>
  </SlideSet>;