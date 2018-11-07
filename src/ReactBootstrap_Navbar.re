[@bs.module] external navbar: ReasonReact.reactClass = "react-bootstrap/lib/Navbar";

[@bs.deriving jsConverter]
type expand = [ | [@bs.as "true"] `true_ | `sm | `md | `lg | `xl];

[@bs.deriving jsConverter]
type fixed = [ | `top | `bottom];

[@bs.deriving jsConverter]
type stick = [ | `top | `bottom];

[@bs.deriving jsConverter]
type variant = [ | `light | `dark];

[@bs.obj]
external navbarProps:
  (
    ~bs: string=?,
    ~fluid: bool=?,
    ~collapseOnSelect: bool=?,
    ~expand: string=?,
    ~expanded: bool=?,
    ~fixed: string=?,
    ~onSelect: 'a=?,
    ~onToggle: 'b=?,
    ~role: string=?,
    ~stick: string=?,
    ~variant: string=?,
    ~bsPrefix: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~bs=?,
      ~fluid=?,
      ~collapseOnSelect=?,
      ~expand=?,
      ~expanded=?,
      ~fixed=?,
      ~onSelect=?,
      ~onToggle=?,
      ~role=?,
      ~stick=?,
      ~variant=?,
      ~bsPrefix=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbar,
    ~props=
      navbarProps(
        ~bs?,
        ~fluid?,
        ~collapseOnSelect?,
        ~expand=?Js.Option.map((. e) => expandToJs(e), expand),
        ~expanded?,
        ~fixed=?Js.Option.map((. f) => fixedToJs(f), fixed),
        ~onSelect?,
        ~onToggle?,
        ~role?,
        ~stick=?Js.Option.map((. s) => stickToJs(s), stick),
        ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
        ~bsPrefix?,
        ()
      ),
    children,
  );

module Brand = {
  [@bs.module] external brand: ReasonReact.reactClass = "react-bootstrap/lib/NavbarBrand";

  [@bs.obj] external brandProps: (~href: string=?, ~bsPrefix: string=?, unit) => _ = "";

  let make = (~href=?, ~bsPrefix=?, children) =>
    ReasonReact.wrapJsForReason(~reactClass=brand, ~props=brandProps(~href?, ~bsPrefix?, ()), children);
};

module Toggle = {
  [@bs.module] external toggle: ReasonReact.reactClass = "react-bootstrap/lib/NavbarToggle";

  [@bs.obj] external toggleProps: (~label: string=?, ~bsPrefix: string=?, unit) => _ = "";

  let make = (~label=?, ~bsPrefix=?, children) =>
    ReasonReact.wrapJsForReason(~reactClass=toggle, ~props=toggleProps(~label?, ~bsPrefix?, ()), children);
};

module Collapse = {
  [@bs.module] external collapse: ReasonReact.reactClass = "react-bootstrap/lib/NavbarCollapse";

  [@bs.obj] external collapseProps: (~bsPrefix: string=?, unit) => _ = "";

  let make = (~bsPrefix=?, children) =>
    ReasonReact.wrapJsForReason(~reactClass=collapse, ~props=collapseProps(~bsPrefix?, ()), children);
};
