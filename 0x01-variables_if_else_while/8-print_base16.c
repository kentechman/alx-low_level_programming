#include <stdio.h>
/**
 * main - main code entry
 * Return: 0 is success
 */
int main(void)
{
int b;
char m;

for (b = 0; b <= 9; b++)
{
putchar(b + 48);
}
for (m = 'a'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
