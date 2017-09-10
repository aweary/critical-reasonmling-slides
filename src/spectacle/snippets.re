/* Use the js delimiter so refmt doesn't mess the format up */
let variant = {js|
type color =
  | Red
  | Blue
  | Yellow
  | Other
|js};

let patternMatching = {js|type schoolPerson = Teacher \n| Director \n| Student string;

let stranger = Student "Kim";

let greeting = switch stranger {
  | Teacher => "Hey professor!"
  | Director => "Hello director."
  | Student "Richard" => "Aye Ricky"
  | Student name => "Hey, " ^ name ^ "."
  };
|js};
let patternMatchingError = {js|type schoolPerson = Teacher \n| Director \n| Student string;
  
let stranger = Student "Kim";

let greeting = switch stranger {
  | Teacher => "Hey professor!"
  /* | Director => "Hello director." */
  | Student "Richard" => "Aye Ricky"
  | Student name => "Hey, " ^ name ^ "."
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
};|js};
let reducerComponent = {js|type action = Add | Subtract;

type state = {count: int};

let component = ReasonReact.reducerComponent "Counter";

let make _children => {
  ...component,
  initialState: fun () => {count: 0},
  reducer: fun action state => {
    let count = state.count;
    switch action {
    | Add => ReasonReact.Update {count: count + 1}
    | Subtract => ReasonReact.Update {count: count - 1}
    }
  }
  render: fun self => {
    let count = string_of_int self.state.count;
    let increment = self.reduce (fun _event => Add);
    let decrement = self.reduce (fun _event => Subtract);
    <div>
      (ReasonReact.stringToElement ("Count: #" ^ count))
      <button onClick=increment>
        (ReasonReact.stringToElement "+")
      </button>
      <button onClick=decrement>
        (ReasonReact.stringToElement "-")
      </button>
    </div>
  }
};|js};

let basics = {js|
  /* Define a variable */
  let user = {
    let firstName = "Bobby";
    let lastName = "Tables";
    firstName ^ " " ^ lastName
  };
  /* Define a function `greet`  */
  let greet ::greeting name => {
    greeting ^ ", " ^ name ^ "!"
  };
  /* Call the `greet` function */
  greet greeting::"Hello" user;
  /* "Hello, Bobby Tables! */
|js};