let str = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent "GettingStarted";

let prompt ::dir="~" message =>
  <div>
    <span style=(ReactDOMRe.Style.make color::"#e91e63" ())> (str (dir ^ " ")) </span>
    <Typist> (str message) </Typist>
  </div>;

let color hex text => <span style=(ReactDOMRe.Style.make color::hex ())> (str text) </span>;

let output = [|
  prompt "yarn create react-app my-app -- --scripts-version reason-scripts",
  <span>
    (str "\n")
    (str "Creating a new React app in ")
    (color "green" "path/to/my-app\n")
    (str "\nInstalling packages. This might take a couple of minutes.")
  </span>,
  <span>
    (str "\n")
    (str "Success! Created my-app at /path/to/my-app")
    (str "\nInside that directory, you can run several commands:")
    (str "\n")
    (color "green" "yarn start")
    (str "\n\tStarts the development server.")
    (str "\n")
    (color "green" "yarn other-stuff")
    (str "\n\tYou get the gist")
    (str "\n")
    (str "Happy Hacking!\n")
    (str "Done in 60.12s.")
  </span>,
  prompt "cd my-app",
  prompt dir::"my-app" "yarn start",
  str "yarn start v0.27.5",
  color "lightgrey" "$ react-scripts start",
  <span>
    (color "green" "Compiled successfully!")
    (str "\nYou can now view my-app in the browser.")
  </span>
|];

let make _children => {
  ...component,
  render: fun _self =>
    <Slide id="reason-scripts">
      <Heading size=5> (str "Starting a ReasonReact Project") </Heading>
      <br />
      <Link href="https://github.com/reasonml-community/reason-scripts">
        (ReasonReact.stringToElement "https://github.com/reasonml-community/reason-scripts")
      </Link>
      <br />
      <br />
      <Terminal title="reason-4-lyfe: ~(zsh)" output />
    </Slide>
};