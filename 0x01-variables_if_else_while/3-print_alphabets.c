#include <stdio.h>
#include <ctype.h>
/**
 * main - is entry point
 *
 * Return: 1, if succesful
 */
int main(void)
{
        char lc;

        for (lc = 'a' ; lc <= 'z' ; lc++)
        {
                putchar(lc);
        }
         char uc;

        for (uc = 'A' ; uc <= 'Z' ; uc++)
        {
                putchar(uc);
        }
        putchar('\n');
        return (0);
}
