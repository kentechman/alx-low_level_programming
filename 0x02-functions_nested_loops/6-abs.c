#include "main.h"
/**
 * _abs - the absolute number
 * @c: the integer to be checked
 * Return: the 1 is absolute number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
