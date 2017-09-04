let snippet = {js|
  let fullName = {
  let firstName = "Brandon";
  let lastName = "Dail";
  firstName ^ " " ^ lastName
  };
/* fullName equals "Brandon Dail"*/
|js};

let make () => {
  let highlights = [|"", "2-4", "3", "4"|];
  let slides =
    Js.Array.map
      (
        fun highlight => {
          let id = "bindings" ^ highlight;
          <Slide id key=id>
            <Heading size=1> (ReasonReact.stringToElement "Let Bindings and Scoping") </Heading>
            <Code highlight source=snippet />
          </Slide>
        }
      )
      highlights;
  <SlideSet> (ReasonReact.arrayToElement slides) </SlideSet>
};
