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
	char low;
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
		putchar('\n');
	return (0);
}
