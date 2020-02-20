[@bs.deriving jsConverter]
type expand = [ | [@bs.as "true"] `true_ | `sm | `md | `lg | `xl];

[@bs.deriving jsConverter]
type fixed = [ | `top | `bottom];

[@bs.deriving jsConverter]
type sticky = [ | `top | `bottom];

[@bs.deriving jsConverter]
type variant = [ | `light | `dark];

[@bs.module "react-bootstrap"] [@react.component]
external make:
  (
    ~as_: React.element=?,
    ~bg: string=?,
    ~collapseOnSelect: bool=?,
    ~expand: expand=?,
    ~expanded: bool=?,
    ~fixed: fixed=?,
    ~onSelect: 'a=?,
    ~onToggle: 'b=?,
    ~role: string=?,
    ~sticky: sticky=?,
    ~variant: variant=?,
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
      ~bsPrefix: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Toggle";
};

module Collapse = {
  [@bs.scope "Navbar"] [@bs.module "react-bootstrap"] [@react.component]
  external make:
    (~bsPrefix: string=?, ~children: React.element=?) => React.element =
    "Collapse";
};