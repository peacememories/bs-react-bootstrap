[@bs.module "react-bootstrap"] [@react.component]
external make:
  (~fluid: bool=?, ~bsPrefix: string=?, ~children: React.element=?) =>
  React.element =
  "Container";