# bs-react-ga
Bucklescript bindings for [react-ga](https://github.com/react-ga/react-ga)

# usage
```reason
ReactGa.initialize("<you GA id>");
ReactGa.pageView(location.pathname ++ location.hash ++ location.search);
```

