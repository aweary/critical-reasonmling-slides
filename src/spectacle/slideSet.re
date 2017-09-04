external slide : ReasonReact.reactClass = "SlideSet" [@@bs.module "spectacle"];

let make children =>
  ReasonReact.wrapJsForReason reactClass::slide props::(Js.Obj.empty ()) children;
