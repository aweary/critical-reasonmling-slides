[@bs.module "spectacle-terminal"] external terminal : ReasonReact.reactClass = "default";

let make = (~output: Js.Array.t(ReasonReact.reactElement), ~title: string, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=terminal,
    ~props={"title": title, "output": output},
    children
  );
