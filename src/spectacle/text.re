[@bs.module "spectacle"] external text : ReasonReact.reactClass = "Text";

let make =
    (
      ~textSize: string="",
      ~textColor: string="",
      ~padding: string="",
      ~fit: Js.boolean=Js.false_,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=text,
    ~props={"fit": fit, "textSize": textSize, "padding": padding, "textColor": textColor},
    children
  );
