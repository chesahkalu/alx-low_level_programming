#ifndef MAIN_H
#define MAIN_H

/* This a header file containing declarations
 * for prototype functions defined in the 0x06-more-functions_nested_loops
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
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif


