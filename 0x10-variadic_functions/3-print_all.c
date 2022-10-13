#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything, followed by new line.
 * @format: list of argument types passed to the function
 *
 * Return: void
 *         Ignore any non char,string(char *),float,int type argument.
 *         If string argument is NULL, print nil.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list vl;
	char *separator = "";

	print_t func[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(vl, format);

	while (format && format[i])
	{
		j = 0;
		while (func[j].t != NULL)
		{
			if (*(func[j].t) == format[i])
			{
				printf("%s", separator);
				func[j].f(vl);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(vl);

	printf("\n");
}
