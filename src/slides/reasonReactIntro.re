let ranges: Js.Array.t CodeSlide.range = [|
  {"loc": [|0, 1000|]},
  {"loc": [|0, 1|]},
  {"loc": [|2, 11|]},
  {"loc": [|4, 10|]}
|];

let make () =>
  <Slide id="reason-react-introduction">
    /* Spectacle sets the font-size on ListItem components as an inline style
       which means setting textSize on the wrapping List doesn't actually set
       the text size of the list items (which is a bug I think). For now, work
       around it by rendering a style tag that forces the list item to inherit
       font-size */

      <style>
        (
          ReasonReact.stringToElement {js|
        li {
          font-size: inherit !important;
        }
        ul {
          line-height: 2 !important;
          margin: auto !important;
          max-width: 90%;
        }
        img {
          transform: translateY(15px) translateX(10px);
        }
      |js}
        )
      </style>
      <Heading size=1>
        (ReasonReact.stringToElement "ReasonReact")
        <Image src=Assets.reasonReactLogo width="12%" />
      </Heading>
      <br />
      <Link href="https://reasonml.github.io/reason-react/">
        (ReasonReact.stringToElement "https://reasonml.github.io/reason-react/")
      </Link>
      <br />
      <br />
      <List_ textSize="29px">
        <Appear>
          <ListItem>
            (ReasonReact.stringToElement "A safer, simpler way to build React components")
          </ListItem>
        </Appear>
        <Appear>
          <ListItem> (ReasonReact.stringToElement "Full support for JSX") </ListItem>
        </Appear>
        <Appear>
          <ListItem>
            (ReasonReact.stringToElement "Type-safe interop with existing JavaScript components")
          </ListItem>
        </Appear>
        <Appear>
          <ListItem>
            (ReasonReact.stringToElement "A new, expressive API for state management")
          </ListItem>
        </Appear>
      </List_>
    </Slide>;