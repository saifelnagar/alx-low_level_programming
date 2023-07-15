#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int b;

for (n = 48; n < 58; n++)
{
for (m = 48; m < 58; m++)
{
for (b = 48; b < 58; b++)
{
if (n < m)
{
if (m < b)
{
putchar(n);
putchar(m);
putchar(b);
if (n < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

