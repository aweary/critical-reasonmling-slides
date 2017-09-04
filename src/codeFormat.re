/**
 * This is a really sketchy, difficult workaround to the
 * issue of syntax highlighting with ReasonReact snippets.
 * The existing solutions don't do a great job, and I don't know
 * enough about parsers to fix them within a reasonable amount of time.
 *
 * So, instead I am biting the bullet and just defining a low-level API
 * for writing code sippets at the token level. This is tediuous but
 * at least I can have full control over what is highlighted :shrug:
 */
let str = ReasonReact.stringToElement;
let color color text => <span style=(ReactDOMRe.Style.make ::color ())> (str text) </span>;

module Colors = {
  let pink = "#ff44aa";
  let blue = "#44aaaa";
  let purple = "#aa33aa";
  let yellow = "#ffaf11"
};

type token =
  | Let
  | BindingName string
  | Equals
  | ModuleBinding string
  | ModuleReference string
  | PropertyAccess string
  | NamedArg string
  | PunnedLabeledArg string
  | Bracket string
  | String string
  | OpeningJSX string
  | OpeningJSXWithAttributes string
  | ClosingJSX string
  | Semicolon
  | Newline
  | Tab
  | Arrow
;

 
let render line => {
  let elements = Js.Array.reduce (fun rendered token => {
    Js.Array.concat (switch token {
    /* Renders "let {name} =" */
    | Let =>  [|(color Colors.pink "let ")|]
    | BindingName name => [|(color Colors.blue name)|]
    | ModuleBinding name =>  [|(color Colors.pink "module "), (color Colors.yellow name), (str " = ") |]
    | ModuleReference name => [|color Colors.pink name|]
    | PunnedLabeledArg name => [| (color Colors.pink "::"), (color Colors.purple name)|]
    | NamedArg name => [|(color Colors.yellow name)|]
    | PropertyAccess name => [|str ("." ^ name ^ " ")|]
    | String chars => [| color Colors.blue ("\"" ^ chars ^ "\"")|]
    | OpeningJSX tagName => [| (str "<"), (color Colors.blue tagName), (str ">")|]
    | OpeningJSXWithAttributes tagName => [| (str "<"), (color Colors.blue tagName), (str " ")|]
    | ClosingJSX tagName => [| (str "</"), (color Colors.blue tagName), (str ">")|]
    | Semicolon => [| color  Colors.blue ";"|]
    | Newline => [| str "\n"|]
    | Bracket char => [| str char|]
    | Tab => [| str "\t"|]
    | Equals => [| str " = "|]
    | Arrow => [| str " => "|]
    }) rendered
  }) [||] line;
  ReasonReact.arrayToElement elements
}