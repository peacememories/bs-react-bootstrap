[@bs.module] external nav: ReasonReact.reactClass = "react-bootstrap/lib/Nav";

[@bs.deriving jsConverter]
type variant = [
  | `tabs
  | `pills
];

[@bs.obj] external makeNavProps:
  (
    ~activeKey: string=?,
    ~fill: bool=?,
    ~justify: bool=?,
    ~navbar: bool=?,
    ~onSelect: 'a=?,
    ~role: string=?,
    ~variant: string=?,
    ~bsPrefix: string=?,
    ~pullRight: bool=?,
    unit
  ) => _ = "";

let make =
    (
      ~activeKey=?,
      ~fill=?,
      ~justify=?,
      ~navbar=?,
      ~onSelect=?,
      ~role=?,
      ~variant=?,
      ~bsPrefix=?,
      ~pullRight=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=nav,
    ~props=makeNavProps(
      ~activeKey?,
      ~fill?,
      ~justify?,
      ~navbar?,
      ~onSelect?,
      ~role?,
      ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
      ~bsPrefix?,
      ~pullRight?,
      ()
    ),
    children
  );

module Item = {
  [@bs.module] external item: ReasonReact.reactClass = "react-bootstrap/lib/NavItem";

  [@bs.obj] external itemProps:
    (
      ~active: bool=?,
      ~disabled: bool=?,
      ~eventKey: 'a=?,
      ~href: string=?,
      ~onSelect: 'b=?,
      ~onClick: 'c=?,
      ~role: string=?,
      ~bsPrefix: string=?,
      ~className: string=?,
      unit
    ) => _ = "";

  let make =
      (
        ~active=?,
        ~disabled=?,
        ~eventKey=?,
        ~href=?,
        ~onSelect=?,
        ~onClick=?,
        ~role=?,
        ~bsPrefix=?,
        ~className=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=item,
      ~props=itemProps(
        ~active?,
        ~disabled?,
        ~eventKey?,
        ~href?,
        ~onSelect?,
        ~onClick?,
        ~role?,
        ~bsPrefix?,
        ~className?,
        ()
      ),
      children
    );
};
