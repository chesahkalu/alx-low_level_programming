#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer -a swaps with b
 * @b: second integer -b swaps with a
 */

void swap_int(int *a, int *b)
{
	int temp;/*used as temp storage space and empty*/

	temp = *a;/*a value is put into temp storage*/
	*a = *b;/*b value is put into empty a storage*/
	*b = temp;/*a value now in temp is then put into empty b*/
}

