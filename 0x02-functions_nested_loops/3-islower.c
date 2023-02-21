#include "main.h"
/**
 * _islower - prints lower case alphabets
 * @c: character to be checked
 * Return: returns 1 if lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
