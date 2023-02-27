#include "main.h"
/**
 * _puts - used to print strings lollowed by a newline
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
