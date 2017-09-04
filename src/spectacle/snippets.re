/* Use the js delimiter so refmt doesn't mess the format up */
let variant = {js|
type color =
  | Red
  | Blue
  | Yellow
  | Other
|js};

let patternMatching = {js|
let hex color => switch color {
  | Red => "#FF0000"
  | Green => "#00FF00"
  | Blue => "#0000FF"
  | Other hex => hex
  };
|js};

let patternMatchingError = {js|
let hex color => switch color {
  | Red => "#FF0000"
  | Green => "#00FF00"
/* | Blue => "#0000FF" */
  | Other hex => hex
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