let str = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent "GettingStarted";

let prompt ::dir="~" message =>
  <div>
    <span style=(ReactDOMRe.Style.make color::"#e91e63" ())> (str (dir ^ " ")) </span>
    <Typist> (str message) </Typist>
  </div>;

let color hex text => <span style=(ReactDOMRe.Style.make color::hex ())> (str text) </span>;

let output = [|
  prompt "npm install -g bs-platform",
  <span>
  <div style=(ReactDOMRe.Style.make color::"grey" ())>
    (str "Lots of really confusing output...")
  </div>
  (str "+ bs-platform@1.9.1")
  <div style=(ReactDOMRe.Style.make color::"#9ccc65" ())>
    (str "\tupdated 1 package in 45.276s")
  </div>
  </span>,
  prompt "bsb -init my-reason-app -theme basic-reason",
  str "Running npm link bs-platform in /Users/brandondail/my-reason-app",
  <div style=(ReactDOMRe.Style.make color::"#9ccc65" ())>
    (str "./my-reason-app/node_modules/bs-platform -> /global/node_modules/bs-platform")
  </div>,
  prompt "cd my-reason-app && ls",
  <div style=(ReactDOMRe.Style.make color::"#9ccc65" ())>
    (str "README.md     bsconfig.json node_modules  package.json  src           tasks.json")
  </div>,
  prompt dir::"my-reason-app" "npm run watch",
  <span>
    (str "> my-reason-app@0.1.0 watch /Users/brandondail/my-reason-app\n    > bsb -make-world -w")
  </span>,
  <span> (color "yellow" "\nBSB check") (str " build spec : OK\n") </span>,
  <span>
    (str "\nMaking the dependency world!\n")
    (color "yellow" "Package stack: ")
    (str "my-reason-app\n")
  </span>,
  <span>
    (str "\nStart Watching now\n")
    (str "\n>>>> Start compiling\n")
    (str "\nRebuilding since []\n")
    (color "yellow" "BSB check ")
    (str "build spec : OK\n")
    (str "ninja.exe -C lib/bs\n")
    (str "ninja: Entering directory `lib/bs'\n")
    (str "ninja: no work to do.\n")
    (str ">>>> Finish compiling\n")
    (str "watching dir src now\n")
  </span>
|];

let make _children => {
  ...component,
  render: fun _self =>
    <Slide id="foo">
      <Heading size=4> (str "Starting a Reason Project") </Heading>
      <br />
      <Terminal title="reason-4-lyfe: ~(zsh)" output />
    </Slide>
};