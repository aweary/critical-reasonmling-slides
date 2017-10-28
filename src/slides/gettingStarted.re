let str = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("GettingStarted");

let prompt = (~dir="~", message) =>
  <div>
    <span style=(ReactDOMRe.Style.make(~color="#e91e63", ()))> (str(dir ++ " ")) </span>
    <Typist> (str(message)) </Typist>
  </div>;

let color = (hex, text) =>
  <span style=(ReactDOMRe.Style.make(~color=hex, ()))> (str(text)) </span>;

let output = [|
  color("grey", "# Install bs-platform globally"),
  prompt("npm install -g bs-platform"),
  <span>
    (str("+ bs-platform@1.9.1"))
    <div style=(ReactDOMRe.Style.make(~color="#9ccc65", ()))>
      (str("\tupdated 1 package in 45.276s"))
    </div>
  </span>,
  color("grey", "# Create your app with bsb init!"),
  prompt("bsb -init my-reason-app -theme basic-reason")
|];

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Slide id="foo">

        <Heading size=5> (str("Starting a New Project")) </Heading>
        <Code
          textSize="40px"
          source="/* Install bs-platform globally*/\nnpm install -g bs-platform\n/*Create your app with bsb -init */\nbsb -init my-app -theme basic-reason"
        />
      </Slide>
      /* <Heading size=5> (str "Adding to an Existing Project") </Heading>
         <Code source="npm install --save-dev bs-loader" /> */
};
