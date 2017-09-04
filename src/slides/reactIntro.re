let ranges: Js.Array.t CodeSlide.range = [|
  {"loc": [|0, 1000|], "title": "Building a Stateless Component."},
  {"loc": [|0, 1|], "title": "Create the component spec"},
  {"loc": [|2, 11|], "title": "Define the make function"},
  {"loc": [|4, 10|], "title": "Override the default implementation"}
|];

let make () =>
  <Slide id="defining-reason-react-components">
    <Heading size=4>
      (ReasonReact.stringToElement "Building Components with ")
    </Heading>
    <Heading size=3>
      (CodeFormat.color "red" "ReasonReact")
    </Heading>
    <Appear>
      <Text>
        (ReasonReact.stringToElement "Create the component template.")
      </Text>
    </Appear>
    <Appear>
      <Text>
        (ReasonReact.stringToElement "Define the make method.")
      </Text>
    </Appear>
    <Appear>
      <Text>
        (ReasonReact.stringToElement "Implement the required methods.")
      </Text>
    </Appear>
  </Slide>