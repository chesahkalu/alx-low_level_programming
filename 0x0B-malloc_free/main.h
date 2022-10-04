#ifndef MAIN_H
#define MAIN_H

/* This a header file containing declarations
 * for prototype functions defined in the 0x0B-malloc_free 0x0B-malloc_free
 * tasks and directory
 * This is like creating my own library with declared functions
 * The tasks defines  the functions
 */

/*enclosing the files  contentinbetween ifndef,define and endif,		      
stops the compiler from processing the file twice if its included twice,
if not so, this will cause an error*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
