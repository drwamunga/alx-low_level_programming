#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main block
* This program prints alphabet in lowcase then in uppercase, followed by a new line.
*Return: 0
*/
int main(void)
{
	char low = 'a';
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	char up = 'A';
	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);
		putchar('\n');
	return (0);
}
