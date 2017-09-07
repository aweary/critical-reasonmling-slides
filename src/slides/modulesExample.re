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
  <Slide id="module-example"> <Code highlight="4-5" source=snippet /> </Slide>
};