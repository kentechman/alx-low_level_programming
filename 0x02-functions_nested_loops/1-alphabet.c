#include "main.h"
/**
 * print_alphabet - make alphabets
 * Return: 0 is success
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
