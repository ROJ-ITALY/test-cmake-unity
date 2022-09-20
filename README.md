# Example of Cmake Unity

### Commands to build and run tests

Generate test toolchain
```sh
cmake -GNinja -DTARGET_GROUP=test .
```
Run build
```sh
ninja -v
```
Run test
```sh
ctest --verbose
```

### Commands to build and run application

Generate production toolchain
```sh
cmake -GNinja -DTARGET_GROUP=production .
```
Run build
```sh
ninja -v
```
Run application
```sh
main/main
```
