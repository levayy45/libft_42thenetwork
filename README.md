# libft

A custom C library implementing standard functions from scratch.

## About

libft is the first project at 42 School. It involves recoding a number of functions from the C standard library, as well as additional utility functions that will be useful throughout the curriculum.

## Features

### Part 1 - Libc Functions
Standard C library functions reimplemented:
- Character checks and conversions (`isalpha`, `isdigit`, `toupper`, etc.)
- String manipulation (`strlen`, `strcpy`, `strcat`, `strncat`, etc.)
- Memory functions (`memset`, `memcpy`, `memmove`, etc.)
- String to integer conversion (`atoi`)

### Part 2 - Additional Functions
Useful functions not in the standard library:
- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string by delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character
- `ft_putchar_fd` / `ft_putstr_fd` - Output to file descriptor
- `ft_putendl_fd` / `ft_putnbr_fd` - Output with newline/number to fd

### Bonus - Linked List Functions
- `ft_lstnew` - Create new list element
- `ft_lstadd_front` / `ft_lstadd_back` - Add element to list
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last element
- `ft_lstdelone` / `ft_lstclear` - Delete elements
- `ft_lstiter` - Iterate and apply function
- `ft_lstmap` - Create new list with function applied

## Installation

Clone the repository:
```bash
git clone https://github.com/levayy45/libft_42thenetwork.git
cd libft_42thenetwork
```

Compile the library:
```bash
make
```

This will create `libft.a`, which you can link with your projects.

## Usage

Include the header in your C files:
```c
#include "libft.h"
```

Compile your program with the library:
```bash
cc your_program.c libft.a
```

## Makefile Rules

- `make` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and library
- `make re` - Recompile everything
- `make bonus` - Compile with bonus functions

## Project Structure

```
.
├── Makefile
├── libft.h
├── ft_*.c (source files)
└── README.md
```

## Norms

This project follows the 42 School coding standard (Norminette).

---

**42 School Project** | Made with ☕ by levayy