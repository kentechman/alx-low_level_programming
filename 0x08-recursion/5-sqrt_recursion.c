#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns natural value of square root of number
 * @n: the number
 * Return: the nuatural value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural number
 * @n: the number
 * @i: the italete
 * Return: the natural value
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
{
return (-1);
}
if (sqrt == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
