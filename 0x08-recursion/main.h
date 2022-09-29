#ifndef MAIN_H
#define MAIN_H

/* This a header file containing declarations
 * for prototype functions defined in the 0x08-recursion
 * tasks and directory
 * This is like creating my own library with declared functions
 * The tasks defines  the functions
 *
 *
 * enclosing the files  contentinbetween ifndef,define and endif,
 * stops the compiler from processing the file twice if its included twice,
 * if not so, this will cause an error
 * */

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
