#include "main.h"
/**
 * _memcpy - the entry point
 * @src: the source of the memory
 * @dest: the destination of the source memory
 * @n: number of bytes copied from source
 * Return: the return is dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
