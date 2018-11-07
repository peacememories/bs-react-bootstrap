# bs-react-bootstrap

## Introduction

This is [BuckleScript](https://bucklescript.github.io/) bindings for [React-Bootstrap](https://react-bootstrap.github.io/)

### WIP - Feel free to send PR and help improve it.

## Installation

- With npm:

```sh
npm install --save bs-react-bootstrap
```

- With Yarn

```sh
yarn add bs-react-bootstrap
```

- Add `bs-react-bootstrap` to `bs-dependencies` on your `bsconfig.json`
- Include Bootstrap CSS into your `index.html`

```html
<link
  rel="stylesheet"
  href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css"
  integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u"
  crossorigin="anonymous"
>
```

> ### Note
>
> As you are using React Bootstrap it's not necessary to import any jQuery stuff.

## Usage

Please refer to [React Bootstrap Documentation](https://react-bootstrap.github.io/components/alerts/) for each component Spec.

Some specif patterns:

- enums :fast_forward: polymorphic variants <sup>see on sample</sup>

> ### Legend
>
> | :link: Binding          |
> | ----------------------- |
> | :white_check_mark: Done |
> | :x: Not implemented yet |
> | :warning: WIP           |

:link: :x: Alerts\
:link: :x: Badge\
:link: :x: Breadcrumb\
:link: :x: Buttons\
:link: :x: Button Group\
:link: :x: Cards\
:link: :x: Carousel\
:link: :x: Dropdowns\
:link: :x: Forms\
:link: :x: Input Group\
:link: :x: Images\
:link: :x: Figures\
:link: :x: Jumbotron\
:link: :x: List Group\
:link: :x: Modal\
:link: :warning: Navs\
:link: :white_check_mark:Navbar\
:link: :x: Overlays\
:link: :x: Pagination\
:link: :x: Popovers\
:link: :x: Progress\
:link: :x: Table\
:link: :x: Tabs\
:link: :x: Tooltips

Sample: `Navbar`

```reason
open ReactBootstrap;

let component = "App" |> ReasonReact.statelessComponent;

let make = _children => {
  ...component,
  render: _self =>
    <div className="App container">
      <Navbar fixed=`top fluid=true collapseOnSelect=true>
        <Navbar.Brand>
          <a href="/">
            {string("Scratch")}
          </a>
        </Navbar.Brand>
        <Navbar.Toggle />
        <Navbar.Collapse>
          <Nav pullRight=true>
            <Nav.Item href="signup">
              {string("Sign Up")}
            </Nav.Item>
            <Nav.Item href="login">
              {string("Log In")}
            </Nav.Item>
          </Nav>
        </Navbar.Collapse>
      </Navbar>
      <Routes />
    </div>,
};
```
