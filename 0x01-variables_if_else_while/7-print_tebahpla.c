#include<stdio.h>
/**
 * main - main entry of code
 * Return: 0 is for success
 */
int main(void)
{
char ch = 122;
while (ch >= 97)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
