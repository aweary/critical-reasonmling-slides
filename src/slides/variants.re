let codeContainerStyle = ReactDOMRe.Style.make width::"50%" margin::"auto" ();

let make () =>
  <Slide id=("variants")>
    <Heading size=1> (ReasonReact.stringToElement "Variants") </Heading>
    <div style=codeContainerStyle> <Code source=Snippets.variant /> </div>
  </Slide>;