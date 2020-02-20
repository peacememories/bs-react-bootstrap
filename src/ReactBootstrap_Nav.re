[@bs.module "react-bootstrap"] [@react.component]
external make:
  (
    ~activeKey: string=?,
    ~cardHeaderBsPrefix: string=?,
    ~fill: bool=?,
    ~justify: bool=?,
    ~navbar: bool=?,
    ~navbarBsPrefix: string=?,
    ~onKeyDown: 'a=?,
    ~onSelect: 'b=?,
    ~role: string=?,
    ~variant: [@bs.string] [ | `tabs | `pills]=?,
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