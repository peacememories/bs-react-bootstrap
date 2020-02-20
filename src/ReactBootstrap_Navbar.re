[@bs.module "react-bootstrap"] [@react.component]
external make:
  (
    ~as_: React.element=?,
    ~bg: string=?,
    ~collapseOnSelect: bool=?,
    ~expand: [@bs.string] [ | [@bs.as "true"] `true_ | `sm | `md | `lg | `xl]=?,
    ~expanded: bool=?,
    ~fixed: [@bs.string] [ | `top | `bottom]=?,
    ~onSelect: 'a=?,
    ~onToggle: 'b=?,
    ~role: string=?,
    ~sticky: [@bs.string] [ | `top | `bottom]=?,
    ~variant: [@bs.string] [ | `light | `dark]=?,
    ~bsPrefix: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Navbar";

module Brand = {
  [@bs.scope "Navbar"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (
      ~as_: React.element=?,
      ~href: string=?,
      ~bsPrefix: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Brand";
};

module Toggle = {
  [@bs.scope "Navbar"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (
      ~as_: React.element=?,
      ~label: string=?,
      ~onClick: 'a=?,
      ~ariaControls: string=?,
      ~bsPrefix: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Toggle";
};

module Collapse = {
  [@bs.scope "Navbar"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (~id: string=?, ~bsPrefix: string=?, ~children: React.element=?) =>
    React.element =
    "Collapse";
};