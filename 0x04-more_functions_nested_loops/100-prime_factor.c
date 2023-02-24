#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * main - prints the largest facter of 612852475143
 * Return: always 0
 */
int main(void)
{
	long x, maxf, square;
	long number;

	number = 612852475143;
	square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}

	}
	printf("%ld\n", maxf);
	return (0);
}
