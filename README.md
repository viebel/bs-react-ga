# bs-react-ga
Bucklescript bindings for [react-ga](https://github.com/react-ga/react-ga).

From `react-ga` documentation:

React-ga is a JavaScript module that can be used to include Google Analytics tracking code in a website or app that uses React for its front-end codebase. It does not currently use any React code internally, but has been written for use with a number of Mozilla Foundation websites that are using React, as a way to standardize our GA Instrumentation across projects.

It is designed to work with the latest version of Google Analytics, Universal Analytics. At this point, all Google Analytics projects are being upgraded to Universal Analytics, so this module will not support the older ga.js implementation.

This module is mildly opinionated in how we instrument tracking within our front-end code. Our API is slightly more verbose than the core Google Analytics library, in the hope that the code is easier to read and understand for our engineers. See examples below.


# Prerequisites

```
npm install --global bs-platform
yarn install
```

# How to compile

```
yarn build
```

# Usage

```
yarn add bs-react-ga
```
And add `bs-react-ga` to `dependencies` node of your `bsconfig.json`.

For the moment, only `initialize` and `pageView` bindings are provided.

# Code snippets

GA must be initialized using `initialize` before any of the other tracking functions will record any data. 

```reason
ReactGa.initialize("<you GA id>");
ReactGa.pageView(location.pathname ++ location.hash ++ location.search);
```

