/* This a header file containing declarations
 * for functions defined 0x03-debugging
 * tasks and directory
 * This is like creating my own library with declared functions
 * The tasks defines  the functions
 * The declarations are enclosed with #ifndef,#define,#endif
 * to make them read only once if included more than once.
 */

#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif
