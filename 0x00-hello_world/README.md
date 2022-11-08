# C :page_with_curl: 0x00-hello_world
## About this project:
In this project I learnt and practiced;
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program
## Tasks file description;
  * [0-preprocessor](./0-preprocessor): Bash script that runs a C file saved in the
  variable `$CFILE` through the preprocessor and saves the result in the file `c`.

  * [1-compiler](./1-compiler): Bash script that compiles a C file saved in the
  variable `$CFILE` that does not link; saves the result in an output file of the
  same name but with a `.o` extension.
    * Example: If the C file is `main.c`, the output is `main.o`.

  * [2-assembler](./2-assembler): Bash script that generates the assembly code of a
  C code saved in the variable `$CFILE`; saves the result in an output file of the
  same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the result is `main.s`.

  * [3-name](./3-name): Bash Script that compiles a C file saved in the variable
  `$CFILE` and creates an executable `cisfun`.

  * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building
  a multilingual puzzle`, followed by a new line, using the function `puts`.
  
  * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammer, but
  the outcome is a piece of art,`, followed by a new line, using the function `printf`.

  * [6-size.c](./6-size.c): C program that prints the size of various types on the computer
  it is compiled and run on.

  * [100-intel](./100-intel): Script that generates the assembly code in Intel syntax of a
  C file saved in the variable $CFILE; saves the result in an output file of the same name
  but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.

  * [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is
  useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error,
  without using any functions listed in the NAME sesction of the man(3) `printf` or man(3)
  `puts`.
