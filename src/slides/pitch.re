let make () =>
  <Slide align="flex-end center" id="pitch">
    /* <Heading size=1> (ReasonReact.stringToElement "The Stack") </Heading> */
    <style>
      (ReasonReact.stringToElement {js|
        img {
          margin-right: 20px !important;
          transform: translateY(10px);
        }  
      |js})
    </style>
    <Layout>
      <Fill>
        <Heading size=5>
          <Image src=Assets.ocamlLogo width="20%" />
          (ReasonReact.stringToElement "The Semantics") 
        </Heading>
        <br />
        <Text textSize="20px">
          (ReasonReact.stringToElement "OCaml provides an expressive and dynamic language")
        </Text>
        <br />
      </Fill>
    </Layout>
    <Layout>
      <Fill>
        <Heading size=5>
          <Image src=Assets.reasonLogo width="20%" />
          (ReasonReact.stringToElement "The Syntax")
        </Heading>
        <br />
        <Text textSize="20px">
          (ReasonReact.stringToElement "ReasonML provides a familiar, usable interface")
        </Text>
        <br />
      </Fill>
    </Layout>
    <Layout>
      <Fill>
        <Heading size=5>
          <Image src=Assets.buckleScriptLogo width="10%" />
          (ReasonReact.stringToElement "The Compiler")
        </Heading>
        <br />
        <Text textSize="20px">
          (ReasonReact.stringToElement "BuckleScript compiles OCaml/Reason to clean, accurate JavaScript")
        </Text>
      </Fill>
    </Layout>
  </Slide>;