let make () =>
  <Slide align="flex-end center" id="pitch">
    /* <Heading size=1> (ReasonReact.stringToElement "The Stack") </Heading> */

    <Layout>
      <Fill>
        <Heading size=5>
          (ReasonReact.stringToElement "The Semantics")
        </Heading>
        <Text>
          (ReasonReact.stringToElement "OCaml provides an expressive and dynamic language")
        </Text>
      </Fill>
    </Layout>
    <Layout>
      <Fill>
        <Heading size=5>
          (ReasonReact.stringToElement "The Syntax")
        </Heading>
        <Text>
          (ReasonReact.stringToElement "ReasonML provides a familiar, usable interface")
        </Text>
      </Fill>
    </Layout>
    <Layout>
      <Fill>
        <Heading size=5>
          (ReasonReact.stringToElement "The Compiler")
        </Heading>
        <Text>
          (ReasonReact.stringToElement "BuckleScript compiles OCaml/Reason to clean, accurate JavaScript")
        </Text>
      </Fill>
    </Layout>
  </Slide>;