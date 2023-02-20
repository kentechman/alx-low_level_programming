#include<stdio.h>
/**
 * main - main entry
 * Return: 0 is successeful
 */
int main(void)
{
int alp = 97;

while (alp <= 122)
{
if (alp == 101 || alp == 113)
{
alp++;
continue;
}
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
