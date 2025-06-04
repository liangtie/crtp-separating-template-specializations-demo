# CRTP Separating Template Specializations Demo

This project demonstrates how to use the Curiously Recurring Template Pattern (CRTP) in C++ and how to separate template specializations into different files.

## Structure

- [`crtp.h`](crtp.h): Defines the `BASE<Derived>` CRTP template class.
- [`fool.h`](fool.h): Defines the `FOOL` and `FOOL_2` classes, both inheriting from `BASE`.
- [`specialization.h`](specialization.h): Provides a specialization of the `BASE<FOOL>::hello()` method.
- [`main.cpp`](main.cpp): Entry point, demonstrates usage of the classes and the specialization.

## How It Works

- `BASE<Derived>` provides a `hello()` method that calls a `hi()` method on the derived class.
- `FOOL` and `FOOL_2` both implement `hi()`.
- [`specialization.h`](specialization.h) overrides `BASE<FOOL>::hello()` to provide custom behavior for `FOOL`.
- If you comment out the `#include "specialization.h"` line in [`main.cpp`](main.cpp), the default `BASE<Derived>::hello()` is used for `FOOL`.

## Building

Use CMake to build the project:

```sh
cmake -S . -B build
cmake --build build
```
