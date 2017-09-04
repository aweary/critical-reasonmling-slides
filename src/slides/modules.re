let snippet = {js|
module School = {
  type profession = Teacher | Director;
  let getProfession person =>
    switch person {
    | Teacher => "A teacher"
    | Director => "A director"
    };
};

let mrFoobar = School.Teacher;
print_endline (School.getProfession mrFoobar);
/* "A teacher" */
|js};

let make () => {
  let highlights = [|"", "2-4", "3", "4"|];
  let slides =
    Js.Array.map
      (
        fun highlight => {
          let id = "bindings" ^ highlight;
          <Slide id key=id>
            <Heading size=1> (ReasonReact.stringToElement "Modules") </Heading>
            <Code highlight source=snippet />
          </Slide>
        }
      )
      highlights;
  <SlideSet> (ReasonReact.arrayToElement slides) </SlideSet>
};
