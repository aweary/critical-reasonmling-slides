let defaultToUndefined = (opt) =>
  switch opt {
  | Some(opt) => opt
  | None => Js.Undefined.empty
  };

let defaultTo = (default, opt) =>
  switch opt {
  | Some(x) => x
  | None => default
  };
