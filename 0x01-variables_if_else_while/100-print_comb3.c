#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Write a program that prints all possible different combinations of two digits
*Return: 0
*/
int main(void)
{
int d;
	for (d = 1; d <= 89; d++)
	{
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
	}
	if (d != 89)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
return (0);
}
