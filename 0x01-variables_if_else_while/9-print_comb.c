#include<stdio.h>
/**
 * main - main code space
 * Return: 0 is successful
 */
int main(void)
{
int b;
for (b = 0; b <= 9; b++)
{
putchar(b + 48);
if (b == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

