let ranges: Js.Array.t CodeSlide.range = [|
{"loc": [|0, 1000|], "title": "Building a Stateless Component."},
{"loc": [|0, 1|], "title": "Create the component spec"},
{"loc": [|2, 11|], "title": "Define the make function"},
{"loc": [|4, 10|], "title": "Override the default implementation"}
|];

let make () =>
<Slide id="reason-react-introduction">
  <Heading size=1>
    (ReasonReact.stringToElement "ReasonReact")
  </Heading>
  <a href="https://reasonml.github.io/reason-react/" />
  <Image src=Assets.reasonReactLogo width="20%" />
</Slide>