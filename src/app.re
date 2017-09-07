let component = ReasonReact.statelessComponent "App";

let colors = {"primary": "white", "secondary": "#1F2022", "tertiary": "#db4d3f"};

let fonts = {"primary": "Montserrat", "secondary": "Helvetica"};

let theme = Theme.create colors fonts;

let make _children => {
  ...component,
  render: fun _self =>
    <div>
      <Typeface googleFont="Roboto Mono" />
      <Deck theme>
        (Introduction.make ())
        (SoHotRightNow.make ())
        (Pitch.make ())
        <Compiler />
        (ReasonLogo.make ())
        (BindingsAndScope.make ())
        (TypeSystem.make ())
        (PatternMatchingVariants.make ())
        (Modules.make ())
        (FilesAsModules.make ())
        (ModulesExample.make ())
        (Tooling.make ())
        (Ffi.make ())
        <GettingStarted />
        (TheEnd.make ())
        (ReasonReactIntro.make ())
        (ReactIntro.make ())
        (ComponentTemplate.make ())
        (StatelessComponent.make ())
        (ReducerComponents.make ())
        <StartingReasonReactProject />
      </Deck>
    </div>
};