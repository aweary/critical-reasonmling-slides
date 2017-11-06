/* open Types; */
[@bs.module "spectacle"] external codePane : ReasonReact.reactClass = "CodePane";

let make = (~lang: string, ~source: string, ~textSize: string, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=codePane,
    ~props={"lang": lang, "source": source, "textSize": textSize},
    children
  );
