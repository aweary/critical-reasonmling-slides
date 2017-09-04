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
        (GoodThings.make ())
        (Pitch.make ())
        (Bindings.make ())
        (Variants.make ())
        (PatternMatchingVariants.make ())
        <Compiler />
        <GettingStarted />
        (ReasonReactIntro.make ())
        (ReactIntro.make ())
        (ComponentTemplate.make ())
        (StatelessComponent.make ())
      </Deck>
    </div>
};