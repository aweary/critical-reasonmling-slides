[@bs.module "spectacle"] external deck : ReasonReact.reactClass = "Slide";

let make = (~id: string, ~align: string="center center", ~maxWidth: string="1000px", children) => {
  let style = ReactDOMRe.Style.make(~maxWidth, ~left="0px", ~right="0px", ~margin="auto", ());
  ReasonReact.wrapJsForReason(
    ~reactClass=deck,
    ~props={"align": align, "id": id, "style": style},
    children
  )
};
