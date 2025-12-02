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

Example usage (create `test.c`):

```c
#include "ft_printf.h"

int main(void)
{
    int n = ft_printf("Hello %s! number=%d hex=0x%x%%\n", "world", 42, 255);
    ft_printf("Printed %d characters\n", n);
    return 0;
}
```

Compile and link with the generated archive:

```bash
cc -I. test.c libftprintf.a -o test
./test
```

## API (short)

- `int ft_printf(const char *str, ...);`
  - Returns the number of bytes printed (as an `int`).
  - Passing `NULL` for `str` returns `0`.

## Examples

- `ft_printf("%s %c\n", "abc", 'A');`
- `ft_printf("%d %i\n", -42, 42);`
- `ft_printf("%u\n", 4000000000u);`
- `ft_printf("%x %X\n", 255, 255);`
- `ft_printf("%p\n", ptr);` — prints `(nil)` for `NULL` pointers.

## Build details

- Compiler: `cc` (used in the included `Makefile`).
- Targets:
  - `all`/default: builds `libftprintf.a`.
  - `clean`: removes object files.
  - `fclean`: removes object files and `libftprintf.a`.
  - `re`: runs `fclean` then `all`.

See `Makefile` for exact rules.

## Getting help

- Open an issue in this repository for bugs or feature requests.
- For curriculum-specific questions, refer to your course materials or instructors.

## Contributing

Please see `CONTRIBUTING.md` for short contribution guidelines and how to submit pull requests.

## Maintainers

- Author (from source file headers): mosakura <mosakura@student.42tokyo.jp>
- Repository owner: `sakemyali`

---

If you'd like, I can add an `examples/` folder with the `test.c` example and a `Makefile` target that builds and runs it; tell me if you want that added.
