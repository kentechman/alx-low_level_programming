#include "main.h"
/**
 * swap_int - swaping values of integers
 * @a: the first integer
 * @b: the second integer
 * return: always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
