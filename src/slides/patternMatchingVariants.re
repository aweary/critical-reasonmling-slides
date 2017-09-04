let make () =>
  <SlideSet>
    <Slide id="pattern-matching-variants">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-1">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code highlight="1-4" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-2">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code highlight="6-12" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-3">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code highlight="10-11" source=Snippets.patternMatching />
    </Slide>
    <Slide id="pattern-matching-variants-error">
      <Heading textSize="6.05rem"> (ReasonReact.stringToElement "Pattern Matching") </Heading>
      <Heading size=4> (ReasonReact.stringToElement "Variants") </Heading>
      <Code highlight="9" source=Snippets.patternMatchingError />
      <ErrorBox message="Warning 8: this pattern-matching is not exhaustive.                                                                                                           Here is an example of a value that is not matched:
      Director" />
    </Slide>
  </SlideSet>;