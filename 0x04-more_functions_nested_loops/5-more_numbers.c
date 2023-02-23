#include "main.h"
/**
 * more_numbers - printing numbers repeatedly
 * Return: 10 times
 */
void more_numbers(void)
{
int x, y;
y = 0;

while (y <= 9)
for (x = 0; x <= 14; x++)
{
_putchar(x + '0');
}
_putchar('\n');
y++;
}
