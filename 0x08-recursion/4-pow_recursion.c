#include "main.h"
/**
 *  _pow_recursion - the power of the number
 *  @y: the power value
 *  @x: the number
 *  Return: is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
