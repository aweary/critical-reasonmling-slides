/* Use the js delimiter so refmt doesn't mess the format up */
let variant = {js|
type color =
  | Red
  | Blue
  | Yellow
  | Other
|js};

let patternMatching = {js|type schoolPerson = Teacher \n| Director \n| Student(string);

let stranger = Student("Kim");

let greeting = switch stranger {
  | Teacher => "Hey professor!"
  | Director => "Hello director."
  | Student("Richard") => "Aye Ricky"
  | Student(name) => "Hey, " ++ name ++ "."
  };
|js};

type schoolPerson = Teacher | Director | Student(string);

let stranger = Student("Kim");

let greeting = switch stranger {
  | Teacher => "Hey professor!"
  | Director => "Hello director."
  | Student("Richard") => "Aye Ricky"
  | Student(name) => "Hey, " ++ name ++ "."
  };


let patternMatchingError = {js|type schoolPerson = Teacher \n| Director \n| Student(string);

let stranger = Student("Kim");

let greeting = switch stranger {
  | Teacher => "Hey professor!"
  /* | Director => "Hello director." */
  | Student("Richard") => "Aye Ricky"
  | Student(name) => "Hey, " ++ name ++ "."
  };
|js};

let reactIntro = {js|let component = ReasonReact.statelessComponent("Greeting");

let make = (~name, _children) => {
  ...component,
  render: _self => {
    let greeting = ("Hello, " ++ name);
    <button>
      (ReasonReact.stringToElement(greeting))
    </button>
  }
};|js};

let reducerComponent = {js|type action = Add | Subtract;

type state = {count: int};

let component = ReasonReact.reducerComponent("Counter");

let make = _children => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, state) => {
    let count = state.count;
    switch action {
    | Add => ReasonReact.Update({count: count + 1})
    | Subtract => ReasonReact.Update({count: count - 1})
    }
  },
  render: self => {
    let count = string_of_int(self.state.count);
    let increment = self.reduce(_event => Add);
    let decrement = self.reduce(_event => Subtract);
    <div>
      (ReasonReact.stringToElement("Count: #" ++ count))
      <button onClick=increment>
        (ReasonReact.stringToElement("+"))
      </button>
      <button onClick=decrement>
        (ReasonReact.stringToElement("-"))
      </button>
    </div>
  }
};|js};

let basics = {js|
  /* Define a variable */
  let user = {
    let firstName = "Bobby";
    let lastName = "Tables";
    firstName ++ " " ++ lastName
  };
  /* Define a function `greet`  */
  let greet = (~greeting, name) => {
    greeting ++ ", " ++ name ++ "!"
  };
  /* Call the `greet` function */
  greet(~greeting="Hello", user);
  /* "Hello, Bobby Tables!" */
|js};
