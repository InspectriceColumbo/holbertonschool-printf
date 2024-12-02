Title:
Our own printf function

Description:                                              
The function printf is one of C language's most known function. It is used 
to do formatted printing, i.e, to print a string of characters and to return it to output. With this project, our goal was to mimic printf's basic capabilities (such as handling the character, decimal and string specifiers)  by building our own function named _printf.

Requirements:
Our coding style respects the betty-style requirements.

Compilation:
The compilation command for our code, compiled on Ubuntu 20.04 LTS is the following: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c.

Authorized functions:
Authorized functions are write, malloc, and free, as well as the macros va_start, va_end, va_copy and va_arg. Those last four are used when a variable is of type va_list, meaning that the function takes a variable number of arguments.

Return: NULL or number of printed elements

Flowchart:

![flowchart printf drawio (6)](https://github.com/user-attachments/assets/4d0a2cba-e27a-4a98-b9dc-7d6f85da77ab)

Examples:
To print a string: <br />
.EX <br />
_printf("Hello there... %s!\n", "General Kenobi"); <br />
.EE <br />
Output: <br />
.EX <br />
Hello there... General Kenobi! <br />
.EE <br />

Man page:
See the link to our manpage here: 
