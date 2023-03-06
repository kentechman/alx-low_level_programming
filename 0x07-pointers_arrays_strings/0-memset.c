#include "main.h"
/**
 * _memset - entry point
 * @s: the stating memory
 * @b: the byte to be filled
 * @n: the number of bytes to change
 * Return: the return value is s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
