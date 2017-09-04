/* Use the js delimiter so refmt doesn't mess the format up */
let variant = {js|
type color =
  | Red
  | Blue
  | Yellow
  | Other
|js};

let patternMatching = {js|type schoolPerson = \n  Teacher \n| Director \n| Student string;
  
let greeting =
  switch stranger {
  | Teacher => "Hey professor!"
  | Director => "Hello director."
  | Student "Richard" => "Still here Ricky?"
  | Student anyOtherName => "Hey, " ^ anyOtherName ^ "."
  };
|js};
let patternMatchingError = {js|type schoolPerson = \n  Teacher \n| Director \n| Student string;
  
let greeting =
  switch stranger {
  | Teacher => "Hey professor!"
  /* | Director => "Hello director." */
  | Student "Richard" => "Still here Ricky?"
  | Student anyOtherName => "Hey, " ^ anyOtherName ^ "."
  };
|js};

let reactIntro = {js|let component = ReasonReact.statelessComponent "Greeting";

let make ::name _children => {
  ...component,
  render: fun self => {
    let greeting = ("Hello, " ^ name);
    <button>
      (ReasonReact.stringToElement greeting)
    </button>
  }
};|js}