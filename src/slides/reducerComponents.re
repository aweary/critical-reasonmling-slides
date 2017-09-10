let make () =>
<Slide id="reducer-components">
  <Heading size=3>
    (CodeFormat.color Theme.red "ReasonReact")
  </Heading>
  <Heading size=4> (ReasonReact.stringToElement "Managing State with Reducers") </Heading>
  <List_ textSize="35px">
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Define a variant with all possible actions")
      </ListItem>
    </Appear>
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Define a ")
        <code>
          (ReasonReact.stringToElement "reduce")
        </code>
        (ReasonReact.stringToElement " method for state updates")
      </ListItem>
    </Appear>
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Use ")
        <code>
          (ReasonReact.stringToElement "self.reduce")
        </code>
        (ReasonReact.stringToElement " to bind updater functions")
      </ListItem>
    </Appear>
  </List_>
</Slide>