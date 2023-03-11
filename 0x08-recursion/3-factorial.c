#include "main.h"
/**
 * factorial - the factorial of a digit
 * @n: the digit
 * Return: the factorial of the digit
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
