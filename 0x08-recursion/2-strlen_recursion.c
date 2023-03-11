#include "main.h"
/**
 * _strlen_recursion - the lenght of the string
 * @s: the string
 * Return: the string lengh
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
