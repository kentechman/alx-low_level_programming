#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Return: 0 is for success
 */
void print_alphabet_x10(void)
{
	char alp;
	int i = 0;

	while (i <= 9)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
	{
	_putchar(alp);
	}
	_putchar('\n');
	i++;
	}
}
