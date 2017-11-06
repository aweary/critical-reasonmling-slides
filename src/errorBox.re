let component = ReasonReact.statelessComponent("ErrorBox");

let errorStyle =
  ReactDOMRe.Style.make(
    ~width="100%",
    ~backgroundColor="#db4d3f",
    ~color="white",
    ~padding="10px",
    ~position="absolute",
    ~left="0",
    ~right="0",
    ~margin="auto",
    ()
  );

let make = (~message, _children) => {
  ...component,
  render: (_self) => <div style=errorStyle> (ReasonReact.stringToElement(message)) </div>
};
