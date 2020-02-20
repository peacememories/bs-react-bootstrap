[@bs.deriving jsConverter]
type variant = [ | `tabs | `pills];

[@bs.module "react-bootstrap"] [@react.component]
external make:
  (
    ~activeKey: string=?,
    ~as_: React.element=?,
    ~cardHeaderBsPrefix: string=?,
    ~fill: bool=?,
    ~justify: bool=?,
    ~navbar: bool=?,
    ~navbarBsPrefix: string=?,
    ~onKeyDown: 'a=?,
    ~onSelect: 'b=?,
    ~role: string=?,
    ~variant: variant=?,
    ~onClick: 'c=?,
    ~className: string=?,
    ~bsPrefix: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Nav";

module Item = {
  [@bs.scope "Nav"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (
      ~as_: React.element=?,
      ~role: string=?,
      ~bsPrefix: string=?,
      ~onClick: 'a=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};

module Link = {
  [@bs.scope "Nav"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (
      ~active: bool=?,
      ~as_: React.element=?,
      ~disabled: bool=?,
      ~eventKey: string=?,
      ~href: string=?,
      ~onSelect: 'a=?,
      ~role: string=?,
      ~bsPrefix: string=?,
      ~onClick: 'b=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Link";
};