#include<stdio.h>
/**
 * main - main code entry
 * Return: 0 is successful
 */
int main(void)
{
int base;

for (base = 0; base <= 9; base++)
{
putchar(base + 48);
}
putchar('\n');
return (0);
}
