[@bs.module "react-bootstrap"] [@react.component]
external make:
  (~noGutters: bool=?, ~bsPrefix: string=?, ~children: React.element=?) =>
  React.element =
  "Row";