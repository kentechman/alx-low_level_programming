#include "main.h"
/**
 * print_sign - checks the type of character
 * @n: the number checked
 * Return: return 1 and + if n is greater and -1 if n is less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
