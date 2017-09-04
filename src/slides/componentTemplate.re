let make () =>
<Slide id="component-templates">
  <Heading size=3>
    (CodeFormat.color "red" "ReasonReact")
  </Heading>
  <Heading size=4>
  (ReasonReact.stringToElement "Component Templates")
</Heading>
<br />
  <Appear>
    <Text>
      <code>(ReasonReact.stringToElement "ReasonReact.statelessComponent")</code>
    </Text>
  </Appear>
  <br />
  <Appear>
    <Text>
      <code>
        (ReasonReact.stringToElement "ReasonReact.reducerComponent")
      </code>
    </Text>
  </Appear>
</Slide>