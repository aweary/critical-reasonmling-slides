let ranges: Js.Array.t CodeSlide.range = [|
  {"loc": [|0, 1000|]},
  {"loc": [|0, 1|]},
  {"loc": [|2, 11|]},
  {"loc": [|4, 10|]}
|];

let make () =>
  <Slide id="defining-reason-react-components">
    <Heading size=4>
      (ReasonReact.stringToElement "Building Components with ")
    </Heading>
    <Heading size=3>
      (CodeFormat.color Theme.red "ReasonReact")
    </Heading>
    <br />
    <List_ textSize="35px">
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Create the component template.")
      </ListItem>
    </Appear>
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Define a ")
        <code>
          (ReasonReact.stringToElement "make")
        </code>
        (ReasonReact.stringToElement " function.")
      </ListItem>
    </Appear>
    <Appear>
      <ListItem>
        (ReasonReact.stringToElement "Define ")
        <code>
          (ReasonReact.stringToElement "render")
        </code>
        (ReasonReact.stringToElement " and other lifecycle methods.")
      </ListItem>
    </Appear>
    </List_>
  </Slide>