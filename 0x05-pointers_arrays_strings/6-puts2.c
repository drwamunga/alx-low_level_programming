#include "main.h"
#include <string.h>

void puts2(char *str)
{
	int i;

	for (int i = 0; i < strlen(str); i+=2)
	{
		_putchar(str[i]);
	}
}
