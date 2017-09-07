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