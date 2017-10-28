[@bs.module "react-typist"] external typeist : ReasonReact.reactClass = "default";

let make = (children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=typeist,
    ~props={"cursor": {"show": Js.false_}, "avgTypingDelay": 2},
    children
  );
