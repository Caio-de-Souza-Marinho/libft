# libft

*This project has been created as part of the 42 curriculum by caide-so.*

## Description

**libft** is the foundational project at 42 School — your very first own library. C programming becomes significantly more manageable when you have access to a reliable toolkit of general-purpose functions. Rather than relying on the standard library as a black box, this project challenges you to understand how these functions work under the hood by reimplementing them yourself.

The result is a custom C library (`libft.a`) that replicates essential libc functions and extends them with additional utilities for memory management, string manipulation, linked lists, formatted output, and file I/O. This library becomes a cornerstone tool that you'll carry forward and expand throughout your entire 42 curriculum.

### Why This Project Matters

- **Deep Understanding**: By coding functions like `memcpy`, `split`, and `itoa` from scratch, you internalize how memory, pointers, and data structures work at a fundamental level.
- **Problem-Solving Skills**: You'll encounter edge cases, memory leaks, and segmentation faults — learning to debug and write robust code is part of the journey.
- **Reusable Foundation**: Every function you write here will be reused in future projects. A well-built libft saves countless hours down the road.
- **Autonomy**: You're building your own tools rather than depending on external libraries. This autonomy is central to the 42 philosophy.

This project is where you transition from writing simple programs to engineering a cohesive, modular library that adheres to strict coding standards (the Norm) and passes rigorous peer evaluation.

---

## Project Structure

```
libft/
├── include/          # Header files
│   ├── libft.h       # Master header (includes all others)
│   ├── boolean.h
│   ├── ft_string.h
│   ├── ft_printf.h
│   ├── get_next_line.h
│   ├── io.h
│   ├── list.h
│   ├── libs.h
│   └── mem.h
├── src/
│   ├── boolean/      # Character classification functions
│   ├── string/       # String manipulation functions
│   ├── mem/          # Memory functions
│   ├── io/           # File descriptor output functions
│   ├── list/         # Linked list functions
│   ├── ft_printf/    # ft_printf implementation
│   └── get_next_line/# get_next_line implementation
├── bin/              # Compiled library output (libft.a)
├── obj/              # Compiled object files
└── Makefile
```

---

## Instructions

### Building the Library

```bash
# Build the static library
make

# Remove object files
make clean

# Remove object files and the library
make fclean

# Rebuild from scratch
make re
```

The compiled library will be at `bin/libft.a`.

### Using the Library

Include the master header and link against the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -I include/ -L bin/ -lft -o my_program
```

---

## Function Reference

### Boolean / Character Classification (`boolean.h`)

| Function | Description |
|---|---|
| `ft_isalpha(c)` | Returns 1 if `c` is an alphabetical character |
| `ft_isdigit(c)` | Returns 1 if `c` is a decimal digit |
| `ft_isalnum(c)` | Returns 1 if `c` is alphanumeric |
| `ft_isascii(c)` | Returns 1 if `c` is a valid ASCII character |
| `ft_isprint(c)` | Returns 1 if `c` is a printable character |
| `ft_isspace(c)` | Returns 1 if `c` is a whitespace character |

---

### String Functions (`ft_string.h`)

| Function | Description |
|---|---|
| `ft_strlen(s)` | Returns the length of string `s` |
| `ft_strchr(s, c)` | Finds first occurrence of `c` in `s` |
| `ft_strrchr(s, c)` | Finds last occurrence of `c` in `s` |
| `ft_strncmp(s1, s2, n)` | Compares up to `n` bytes of two strings |
| `ft_strcmp(s1, s2)` | Compares two strings fully |
| `ft_strlcpy(dst, src, size)` | Copies string with size-bounded null-termination |
| `ft_strlcat(dst, src, size)` | Appends string with size-bounded null-termination |
| `ft_strnstr(big, little, len)` | Finds `little` in `big` within `len` bytes |
| `ft_strdup(s)` | Returns a malloc'd duplicate of `s` |
| `ft_strjoin(s1, s2)` | Concatenates two strings into a new malloc'd string |
| `ft_strjoin3(s1, s2, s3)` | Concatenates three strings into a new malloc'd string |
| `ft_strtrim(s1, set)` | Trims characters in `set` from both ends of `s1` |
| `ft_substr(s, start, len)` | Extracts a substring from `s` |
| `ft_split(s, c)` | Splits `s` by delimiter `c` into a NULL-terminated array |
| `ft_strmapi(s, f)` | Applies `f` to each character, returns new string |
| `ft_striteri(s, f)` | Applies `f` to each character in-place |
| `ft_atoi(nptr)` | Converts string to `int` |
| `ft_atol(nptr)` | Converts string to `long` |
| `ft_atoi_base(str, base)` | Converts string to `int` in a given base |
| `ft_itoa(n)` | Converts `int` to a malloc'd string |
| `ft_tolower(c)` | Converts uppercase to lowercase |
| `ft_toupper(c)` | Converts lowercase to uppercase |
| `ft_word_count(s, c)` | Counts words in `s` separated by delimiter `c` |

---

### Memory Functions (`mem.h`)

| Function | Description |
|---|---|
| `ft_memset(s, c, n)` | Fills `n` bytes of `s` with byte `c` |
| `ft_bzero(s, n)` | Sets `n` bytes of `s` to zero |
| `ft_memcpy(dst, src, n)` | Copies `n` bytes from `src` to `dst` (no overlap) |
| `ft_memmove(dst, src, n)` | Copies `n` bytes handling overlapping memory |
| `ft_memchr(s, c, n)` | Scans `n` bytes of `s` for byte `c` |
| `ft_memcmp(s1, s2, n)` | Compares first `n` bytes of `s1` and `s2` |
| `ft_calloc(nmemb, size)` | Allocates zero-initialized memory for `nmemb` elements |

---

### I/O Functions (`io.h`)

| Function | Description |
|---|---|
| `ft_putchar_fd(c, fd)` | Writes character `c` to file descriptor `fd` |
| `ft_putstr_fd(s, fd)` | Writes string `s` to file descriptor `fd` |
| `ft_putendl_fd(s, fd)` | Writes string `s` followed by `\n` to `fd` |
| `ft_putnbr_fd(n, fd)` | Writes integer `n` to file descriptor `fd` |

---

### Linked List Functions (`list.h`)

| Function | Description |
|---|---|
| `ft_lstnew(content)` | Creates a new list node with `content` |
| `ft_lstadd_front(lst, new)` | Adds `new` to the front of `lst` |
| `ft_lstadd_back(lst, new)` | Adds `new` to the back of `lst` |
| `ft_lstlast(lst)` | Returns the last node of `lst` |
| `ft_lstsize(lst)` | Returns the number of nodes in `lst` |
| `ft_lstdelone(lst, del)` | Frees a single node using `del` |
| `ft_lstclear(lst, del)` | Frees the entire list using `del` |
| `ft_lstiter(lst, f)` | Applies `f` to the content of each node |
| `ft_lstmap(lst, f, del)` | Creates a new list by applying `f` to each node |

---

### ft_printf (`ft_printf.h`)

A buffered reimplementation of `printf` that writes to stdout.

```c
int ft_printf(const char *format, ...);
```

**Supported specifiers:**

| Specifier | Description |
|---|---|
| `%c` | Single character |
| `%s` | String |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` / `%X` | Unsigned hexadecimal (lower / upper case) |
| `%p` | Pointer address |
| `%%` | Literal `%` |

**Supported flags:** `+`, `-`, ` `, `0`, `#`, width, and precision fields (including `*`).

---

### get_next_line (`get_next_line.h`)

Reads a file descriptor one line at a time, retaining state between calls.

```c
char *get_next_line(int fd);
```

Returns the next line from `fd` (including the `\n` if present), or `NULL` on EOF or error. Supports up to 1024 simultaneous file descriptors. The buffer size can be overridden at compile time:

```bash
cc -D BUFFER_SIZE=4096 ...
```

---

## Resources

### References

- [C Standard Library Documentation](https://en.cppreference.com/w/c)
- [42 Norm Documentation](https://github.com/42School/norminette)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Understanding `memcpy` vs `memmove`](https://stackoverflow.com/questions/4415910/memcpy-vs-memmove)
- [Linked Lists in C](https://www.learn-c.org/en/Linked_lists)

### AI Usage

AI tools were **not** used in the development of this project. All code was written manually to ensure a deep understanding of C fundamentals, memory management, and low-level programming concepts. This approach aligns with the 42 philosophy of building strong foundational skills through hands-on practice and peer learning.

---

## Compiler Flags

The library is built with `-Wall -Wextra -Werror`.

---

## Author

**caide-so** — caide-so@student.42sp.org.br
