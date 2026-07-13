*This project has been created as part of the 42 curriculum by rexposit.*

# Libft

`Libft` is a 42 Madrid project written in C.

The goal of the project is to build a personal C library by reimplementing several standard libc functions and adding extra utility functions that can be reused in future 42 projects.

The project generates a static library:

```bash
libft.a
```

This library contains general-purpose functions for character checks, string manipulation, memory handling, conversion, allocation and file descriptor output.

---

## Table of Contents

* [Description](#description)
* [Project Rules](#project-rules)
* [Implemented Functions](#implemented-functions)
* [Implementation Overview](#implementation-overview)
* [Function Categories](#function-categories)
* [Instructions](#instructions)
* [Usage Examples](#usage-examples)
* [Testing](#testing)
* [Error Handling](#error-handling)
* [Project Structure](#project-structure)
* [What I Learned](#what-i-learned)
* [Resources](#resources)
* [Author](#author)

---

## Description

`Libft` is my first custom C library.

Programming in C can become repetitive when common utility functions are not available.
This project solves that by recreating useful libc functions and implementing additional helpers that are commonly needed in later projects.

The library can be linked with other C programs to reuse functions such as:

* character classification;
* string length and comparison;
* memory manipulation;
* string duplication and allocation;
* string splitting and trimming;
* integer-to-string conversion;
* output to file descriptors.

The main purpose of the project is not only to create a useful library, but also to understand how these standard functions work internally.

---

## Project Rules

The project must:

* be written in C;
* follow the 42 Norm;
* compile with `-Wall -Wextra -Werror`;
* provide a `Makefile`;
* generate a static library named `libft.a`;
* use `ar` to create the library;
* place all source files at the root of the repository;
* avoid global variables;
* avoid unused files;
* avoid memory leaks;
* avoid unexpected crashes such as segmentation faults, bus errors or double frees.

The Makefile provides the standard rules:

```bash
make
make clean
make fclean
make re
```

---

## Implemented Functions

This implementation includes the following functions.

### Character checks

| Function     | Description                                           |
| ------------ | ----------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is alphabetic              |
| `ft_isdigit` | Checks whether a character is a digit                 |
| `ft_isalnum` | Checks whether a character is alphanumeric            |
| `ft_isascii` | Checks whether a character belongs to the ASCII table |
| `ft_isprint` | Checks whether a character is printable               |

### Character conversion

| Function     | Description                                  |
| ------------ | -------------------------------------------- |
| `ft_toupper` | Converts a lowercase character to uppercase  |
| `ft_tolower` | Converts an uppercase character to lowercase |

### String functions

| Function     | Description                                        |
| ------------ | -------------------------------------------------- |
| `ft_strlen`  | Calculates the length of a string                  |
| `ft_strlcpy` | Copies a string into a buffer with size protection |
| `ft_strlcat` | Concatenates strings with size protection          |
| `ft_strchr`  | Locates the first occurrence of a character        |
| `ft_strrchr` | Locates the last occurrence of a character         |
| `ft_strncmp` | Compares two strings up to `n` characters          |
| `ft_strnstr` | Locates a substring inside a limited-length string |
| `ft_strdup`  | Duplicates a string using dynamic memory           |

### Memory functions

| Function     | Description                                       |
| ------------ | ------------------------------------------------- |
| `ft_memset`  | Fills memory with a byte value                    |
| `ft_bzero`   | Sets memory to zero                               |
| `ft_memcpy`  | Copies memory from one area to another            |
| `ft_memmove` | Copies memory safely, including overlapping areas |
| `ft_memchr`  | Searches memory for a byte                        |
| `ft_memcmp`  | Compares two memory areas                         |
| `ft_calloc`  | Allocates and zero-initializes memory             |

### Conversion functions

| Function  | Description                                     |
| --------- | ----------------------------------------------- |
| `ft_atoi` | Converts a string to an integer                 |
| `ft_itoa` | Converts an integer to a newly allocated string |

### Additional string utilities

| Function      | Description                                                    |
| ------------- | -------------------------------------------------------------- |
| `ft_substr`   | Creates a substring from a string                              |
| `ft_strjoin`  | Joins two strings into a new string                            |
| `ft_strtrim`  | Removes a set of characters from the start and end of a string |
| `ft_split`    | Splits a string into an array of strings                       |
| `ft_strmapi`  | Creates a new string by applying a function to each character  |
| `ft_striteri` | Applies a function to each character of a string in place      |

### File descriptor output

| Function        | Description                                                |
| --------------- | ---------------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor                    |
| `ft_putstr_fd`  | Writes a string to a file descriptor                       |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor                     |

---

## Implementation Overview

The project is built as a static library.

Each function is implemented in its own `.c` file, and all public prototypes are declared in `libft.h`.

The Makefile:

1. compiles each `.c` file into an object file;
2. archives the object files into `libft.a`;
3. provides cleanup rules to remove object files and the generated library.

The library can then be linked with another C program.

---

## Function Categories

### Libc reimplementations

The first part of the project recreates common libc functions.

Examples:

```c
ft_strlen("hello");
ft_isdigit('4');
ft_memset(buffer, 0, size);
ft_strncmp("abc", "abd", 2);
```

The objective is to match the behavior of the original functions as closely as possible while using the `ft_` prefix.

### Memory handling

Memory functions are especially important because many later projects rely on safe manipulation of buffers.

For example, `ft_memmove` handles overlapping memory regions by deciding whether to copy forwards or backwards depending on the source and destination addresses.

This avoids overwriting data before it has been copied.

### Dynamic allocation

Some functions allocate new memory and return it to the caller.

Examples:

```c
ft_strdup("hello");
ft_substr("hello world", 0, 5);
ft_strjoin("hello", " world");
ft_itoa(-42);
```

The caller is responsible for freeing the returned memory.

### String splitting

`ft_split` divides a string into an array of newly allocated strings using a delimiter character.

Example:

```c
ft_split("hello 42 madrid", ' ');
```

Result:

```text
["hello", "42", "madrid", NULL]
```

The returned array must be freed by freeing each string first, then the array itself.

### File descriptor output

The `_fd` functions write output to a specific file descriptor.

This makes them useful for writing to:

* standard output;
* standard error;
* files;
* pipes.

Example:

```c
ft_putstr_fd("Error\n", 2);
```

---

## Instructions

### Clone the repository

```bash
git clone https://github.com/raulrecrec/42_Libft.git
cd 42_Libft
```

### Compile the library

```bash
make
```

This creates:

```bash
libft.a
```

### Makefile rules

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Recompile from scratch
```

---

## Usage Examples

Since `Libft` is a static library, it must be compiled and linked with another C file.

Example `main.c`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *str;
    int     len;

    str = ft_strdup("42 Madrid");
    if (!str)
        return (1);

    len = ft_strlen(str);
    printf("String: %s\n", str);
    printf("Length: %d\n", len);

    free(str);
    return (0);
}
```

Compile with `libft.a`:

```bash
make
cc -Wall -Wextra -Werror main.c libft.a -o test_libft
```

Run:

```bash
./test_libft
```

Expected output:

```text
String: 42 Madrid
Length: 9
```

---

## More Usage Examples

### `ft_split`

```c
char **words;

words = ft_split("hello 42 madrid", ' ');
```

Expected result:

```text
words[0] -> "hello"
words[1] -> "42"
words[2] -> "madrid"
words[3] -> NULL
```

### `ft_itoa`

```c
char *number;

number = ft_itoa(-2147483648);
```

Expected result:

```text
"-2147483648"
```

### `ft_strtrim`

```c
char *trimmed;

trimmed = ft_strtrim("...hello...", ".");
```

Expected result:

```text
"hello"
```

### `_fd` functions

```c
ft_putendl_fd("Hello from libft", 1);
ft_putstr_fd("Error message\n", 2);
ft_putnbr_fd(42, 1);
```

---

## Testing

You can test the library by writing small programs that compare your functions with the original libc behavior.

Example:

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("ft_strlen: %d\n", ft_strlen("hello"));
    printf("strlen:    %lu\n", strlen("hello"));
    return (0);
}
```

Compile:

```bash
make
cc -Wall -Wextra -Werror main.c libft.a -o test_libft
```

Run:

```bash
./test_libft
```

### Suggested test cases

```text
- empty strings
- NULL-sensitive cases where applicable
- very long strings
- negative numbers
- INT_MIN and INT_MAX
- overlapping memory with ft_memmove
- delimiter-only strings with ft_split
- strings with no delimiter in ft_split
- allocation failure checks where possible
- writing to stdout and stderr with _fd functions
```

### Memory testing

You can use Valgrind to check for leaks:

```bash
valgrind --leak-check=full ./test_libft
```

For dynamically allocated functions, every returned pointer should be freed by the caller.

---

## Error Handling

Most functions follow the behavior of their libc equivalents.

For dynamically allocated functions:

* `NULL` is returned if allocation fails;
* the caller is responsible for freeing successful allocations.

Examples of functions that allocate memory:

```text
ft_calloc
ft_strdup
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
```

Some functions are only safe when used with valid pointers, matching the behavior of the corresponding standard C functions.

---

## Project Structure

```text
.
├── Makefile
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
└── ft_putnbr_fd.c
```

### Main files

| File       | Purpose                                           |
| ---------- | ------------------------------------------------- |
| `libft.h`  | Header file with includes and function prototypes |
| `Makefile` | Compilation rules for the static library          |
| `ft_*.c`   | Individual function implementations               |
| `libft.a`  | Static library generated after compilation        |

---

## What I Learned

This project helped me practice several important C programming concepts:

* recreating standard C library functions;
* understanding how common libc functions work internally;
* working with pointers and memory addresses;
* manipulating strings and raw memory;
* handling dynamic memory allocation;
* preventing memory leaks;
* creating and using a static library;
* writing and organizing header files;
* using Makefiles to automate compilation;
* testing custom functions against standard behavior;
* improving defensive programming habits in C.

The most important lesson from this project was understanding that many high-level operations in C are built from simple pointer arithmetic, memory management and careful edge-case handling.

---

## Resources

Useful resources related to this project:

* 42 Libft subject
* 42 Norm documentation
* `man isalpha`
* `man isdigit`
* `man isalnum`
* `man isascii`
* `man isprint`
* `man strlen`
* `man memset`
* `man bzero`
* `man memcpy`
* `man memmove`
* `man strlcpy`
* `man strlcat`
* `man toupper`
* `man tolower`
* `man strchr`
* `man strrchr`
* `man strncmp`
* `man memchr`
* `man memcmp`
* `man strnstr`
* `man atoi`
* `man calloc`
* `man strdup`
* `man malloc`
* `man free`
* `man write`
* Static library creation with `ar`
* C pointer and memory management references

---

## Author

Project developed by:

```text
rexposit
```

42 Madrid student.
