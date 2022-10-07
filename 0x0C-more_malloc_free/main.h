#ifndef MAIN_H
#define MAIN_H

/* This a header file containing declarations
 * for prototype functions defined in the 0x0C-more_malloc_free
 * tasks and directory
 * This is like creating my own library with declared functions
 * The tasks defines  the functions
 */

/*enclosing the files  contentinbetween ifndef,define and endif,		      
stops the compiler from processing the file twice if its included twice,
if not so, this will cause an error*/

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
