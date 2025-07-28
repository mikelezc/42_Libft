# Libft - 42 School Project

[![42 School](https://img.shields.io/badge/42-School-000000?style=flat&logo=42&logoColor=white)](https://42.fr)
[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## 📋 Table of Contents
- [About](#about)
- [Functions](#functions)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Testing](#testing)
- [Author](#author)

## 🎯 About

**Libft** is the first project at 42 School Madrid Telefónica. The goal is to re-implement essential C standard library functions from scratch, providing a deeper understanding of how these fundamental functions work under the hood.

This custom C library serves as a foundation for future 42 projects and demonstrates proficiency in:
- Memory management
- String manipulation
- Linked list operations
- File descriptor handling
- Function pointers

The project is coded in C following the 42 School's strict coding standards (Norminette).

## 📚 Functions

### Part 1 - Libc Functions
Re-implementation of standard C library functions:

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_strlen` | Calculates string length |
| `ft_memset` | Fills memory with constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_strlcpy` | Copies string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts to uppercase |
| `ft_tolower` | Converts to lowercase |
| `ft_strchr` | Locates character in string |
| `ft_strrchr` | Locates character in string (reverse) |
| `ft_strncmp` | Compares strings up to n characters |
| `ft_memchr` | Locates byte in memory |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates and zeros memory |
| `ft_strdup` | Duplicates string |

### Part 2 - Additional Functions
Custom functions not in the standard library:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts substring from string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from string ends |
| `ft_split` | Splits string by delimiter |
| `ft_itoa` | Converts integer to string |
| `ft_strmapi` | Applies function to each character |
| `ft_striteri` | Applies function to each character with index |
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl_fd` | Outputs string with newline to fd |
| `ft_putnbr_fd` | Outputs number to file descriptor |

### Bonus Part - Linked List Functions
Functions for manipulating linked lists:

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates new list element |
| `ft_lstadd_front` | Adds element at beginning |
| `ft_lstsize` | Counts list elements |
| `ft_lstlast` | Returns last element |
| `ft_lstadd_back` | Adds element at end |
| `ft_lstdelone` | Deletes single element |
| `ft_lstclear` | Deletes entire list |
| `ft_lstiter` | Applies function to each element |
| `ft_lstmap` | Creates new list with function applied |

## 🚀 Installation

1. Clone the repository:
```bash
git clone https://github.com/mikelezc/Libft_42.git
cd Libft_42
```

2. Compile the library:
```bash
make
```

3. For bonus functions:
```bash
make bonus
```

## 💻 Usage

Include the header in your C files:
```c
#include "libft.h"
```

Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

Or include the library directly:
```bash
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

## 📝 Examples

### String Manipulation
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    char *substr;
    char *joined;
    
    // Extract substring
    substr = ft_substr(str, 7, 5);  // "World"
    printf("Substring: %s\n", substr);
    
    // Join strings
    joined = ft_strjoin("Hello", " World!");
    printf("Joined: %s\n", joined);
    
    // Split string
    char **words = ft_split("apple,banana,cherry", ',');
    for (int i = 0; words[i]; i++)
        printf("Word %d: %s\n", i, words[i]);
    
    // Clean up
    free(substr);
    free(joined);
    // Remember to free each word and the array for ft_split
    
    return (0);
}
```

### Linked List Operations
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");
    
    // Build list
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    
    // Print list size
    printf("List size: %d\n", ft_lstsize(list));
    
    // Iterate through list
    t_list *current = list;
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }
    
    return (0);
}
```

### Memory and File Operations
```c
#include "libft.h"
#include <fcntl.h>

int main(void)
{
    // Memory operations
    char buffer[20];
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    printf("Buffer: %s\n", buffer);
    
    // File descriptor operations
    int fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    ft_putstr_fd("Hello from libft!\n", fd);
    ft_putnbr_fd(42, fd);
    ft_putchar_fd('\n', fd);
    close(fd);
    
    return (0);
}
```

## 🧪 Testing

To test your functions, you can use various testing frameworks like:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Libftest](https://github.com/jtoty/Libftest)
- [libft_tester](https://github.com/Tripouille/libftTester)

Basic manual testing:
```bash
# Create a test file
echo '#include "libft.h"
#include <stdio.h>
int main() {
    printf("ft_strlen test: %zu\n", ft_strlen("Hello"));
    return 0;
}' > test.c

# Compile and run
gcc test.c libft.a -o test
./test
```

## 🛠️ Makefile Rules

- `make` or `make all` - Compiles the library
- `make bonus` - Compiles with bonus functions
- `make clean` - Removes object files
- `make fclean` - Removes object files and library
- `make re` - Recompiles everything

## 🏫 42 School Standards

This project follows the 42 School's coding standards:
- **Norminette**: All code passes the Norminette linter
- **No memory leaks**: Proper memory management
- **Error handling**: Functions handle edge cases appropriately
- **Forbidden functions**: Only allowed standard library functions are used

## 👨‍💻 Author

**Miguel Lezcano**
- GitHub: [@mikelezc](https://github.com/mikelezc)
- 42 Login: `mlezcano`
- School: 42 Madrid Telefónica

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

*This project was completed as part of the curriculum at 42 School Madrid Telefónica, demonstrating fundamental C programming skills and understanding of system-level programming concepts.*
