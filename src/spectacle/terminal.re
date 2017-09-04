external terminal : ReasonReact.reactClass = "default" [@@bs.module "spectacle-terminal"];

let make output::(output: Js.Array.t ReasonReact.reactElement) title::(title: string) children =>
  ReasonReact.wrapJsForReason
    reactClass::terminal props::{"title": title, "output": output} children;