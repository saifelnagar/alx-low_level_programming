#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;

for (n = 48; n < 58; n++)
{
for (m = 48; m < 58; m++)
{
if (n < m)
{
putchar(n);
putchar(m);
if (n < 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
