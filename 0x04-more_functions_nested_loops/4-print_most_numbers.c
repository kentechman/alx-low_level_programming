#include "main.h"
/**
 * print_most_numbers - numbers to be printed
 * Description: exclude 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
int a;

a = 0;
for (; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}
_putchar('\n');
}
