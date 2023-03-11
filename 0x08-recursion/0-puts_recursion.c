#include "main.h"
/**
 * _puts_recursion - the main entry to print string
 * @s: the string to print
 * Return: nothing to return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s);
}
