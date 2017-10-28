let component = ReasonReact.statelessComponent("App");

let colors = {"primary": "white", "secondary": Theme.black, "tertiary": Theme.red};

let fonts = {"primary": "Montserrat", "secondary": "Helvetica"};

let theme = Theme.create(colors, fonts);

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <Typeface googleFont="Roboto Mono" />
      <Deck theme>
        (Introduction.make())
        (Formidable.make())
        (SoHotRightNow.make())
        (Pitch.make())
        <Compiler />
        (ReasonLogo.make())
        /* (BindingsAndScope.make ()) */
        /* (TypeSystem.make ()) */
        (Basics.make())
        (PatternMatchingVariants.make())
        (Modules.make())
        /* (FilesAsModules.make ()) */
        (ModulesExample.make())
        (Tooling.make())
        (ReasonTools.make())
        (Refmt.make())
        (Repl.make())
        /* (Ffi.make ()) */
        <GettingStarted />
        (TheEnd.make())
        (ReasonReactIntro.make())
        (ReactIntro.make())
        (ComponentTemplate.make())
        (StatelessComponent.make())
        (ReducerComponents.make())
        (ReducerComponentExample.make())
        <StartingReasonReactProject />
        (Thanks.make())
      </Deck>
    </div>
};
