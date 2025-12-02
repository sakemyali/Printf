# ft_printf

A small reimplementation of the C standard library `printf` used for learning and small projects.

This repository provides `ft_printf`, a compact function that prints formatted output to standard output and returns the number of bytes written. It's implemented in plain C, intended for the 42 school cursus and similar educational use.

## Features

- Supports conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
- Prints `(nil)` for `NULL` pointers and `(null)` for `NULL` strings where appropriate.
- Minimal, dependency-free implementation packaged as a static archive `libftprintf.a`.
- Simple, readable code useful for learning variadic functions, format parsing, and low-level I/O.

## Repository layout

- `ft_printf.c` — format parsing and public `ft_printf` entrypoint.
- `print.c`, `print2.c` — functions that implement each conversion specifier.
- `utils.c` — helper functions for printing, string length, and number formatting.
- `ft_printf.h` — public header with function prototypes.
- `Makefile` — build rules (produces `libftprintf.a`).

## Quick start

Build the library:

```bash
make
```

This produces `libftprintf.a` in the repository root.

Compile and link with the generated archive:

```bash
cc -I. test.c libftprintf.a -o test
./test
```

## Getting help

- Open an issue in this repository for bugs or feature requests.
- For curriculum-specific questions, refer to your course materials or instructors.
