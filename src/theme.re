type t;

type colors = {. "primary": string, "secondary": string, "tertiary": string};

type fonts = {. "primary": string, "secondary": string};

/* @TODO is there a better way to avoid this .default issue? */
[@bs.module ("spectacle/lib/themes/default", "createTheme")]
external create : (colors, fonts) => t =
  "default";

let red = "#db4d3f";

let black = "#1F2022";

let orange = "#EC670F";

let green = "#17c4ae";
