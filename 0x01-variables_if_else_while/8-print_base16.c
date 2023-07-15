#include<stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
char ch = 'a';
while (i < 58)
{
putchar(i);
i++;
}
while (ch < 'g')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
