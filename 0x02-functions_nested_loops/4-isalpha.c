#include "main.h"
/**
 * _isalpha - checks the character if its alphabet
 * @c: the alpabet been checked
 * Return: i if alpabet 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
