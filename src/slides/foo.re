type action =
  | Add
  | Subtract;

type state = {count: int};

let component = ReasonReact.reducerComponent "Counter";

let make _children => {
  ...component,
  initialState: fun () => {count: 1},
  reducer: fun action state =>
    switch action {
    | Add => ReasonReact.Update {count: state.count + 1}
    | Subtract => ReasonReact.Update {count: state.count - 1}
  },
  render: fun self => {
    let count = string_of_int self.state.count;
    let increment = self.reduce (fun _event => Add);
    let decrement = self.reduce (fun _event => Subtract);
    <div>
      (ReasonReact.stringToElement ("Count: #" ^ count))
      <button onClick=increment> (ReasonReact.stringToElement "+") </button>
      <button onClick=decrement> (ReasonReact.stringToElement "-") </button>
    </div>
  }
};