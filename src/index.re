external register_service_worker : unit => unit =
  "default" [@@bs.module "./registerServiceWorker"];

register_service_worker ();

ReactDOMRe.renderToElementWithId <App /> "root";
