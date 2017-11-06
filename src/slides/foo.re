type action =
  | Add
  | Subtract;

type state = {count: int};

let component = ReasonReact.reducerComponent("Counter");

let make = (_children) => {
  ...component,
  initialState: () => {count: 1},
  reducer: (action, state) =>
    switch action {
    | Add => ReasonReact.Update({count: state.count + 1})
    | Subtract => ReasonReact.Update({count: state.count - 1})
    },
  render: (self) => {
    let count = string_of_int(self.state.count);
    let increment = self.reduce((_event) => Add);
    let decrement = self.reduce((_event) => Subtract);
    <div>
      (ReasonReact.stringToElement("Count: #" ++ count))
      <button onClick=increment> (ReasonReact.stringToElement("+")) </button>
      <button onClick=decrement> (ReasonReact.stringToElement("-")) </button>
    </div>
  }
};
