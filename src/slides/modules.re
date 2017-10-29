let snippet = {js|
module School = {
  type profession = Teacher | Director;
  let getProfession = person =>
    switch person {
    | Teacher => "A teacher"
    | Director => "A director"
    };
};

let mrFoobar = School.Teacher;
School.getProfession(mrFoobar) |> print_endline;
/* "A teacher" */
|js};

let make = () =>
  <Slide id="module-intro" maxWidth="800px">
    <style>
      (
        ReasonReact.stringToElement(
          {js|
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
      )
    </style>
    <Heading size=1> (ReasonReact.stringToElement("Modules")) </Heading>
    <br />
    <List_ textSize="25px">
      <Appear>
        <ListItem> (ReasonReact.stringToElement("Every file is a module.")) </ListItem>
      </Appear>
      <Appear>
        <ListItem> (ReasonReact.stringToElement("Modules can contain other modules")) </ListItem>
      </Appear>
      <Appear>
        <ListItem>
          (ReasonReact.stringToElement("Module interfaces can be defined separately"))
        </ListItem>
      </Appear>
      <Appear>
        <ListItem> (ReasonReact.stringToElement("Functors (functions for modules)")) </ListItem>
      </Appear>
    </List_>
  </Slide>;
