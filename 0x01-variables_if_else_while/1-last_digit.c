#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - main block
*
* This program prints if a random number is 
* greater than 5
* less than 6 and not 0
* and if number is 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
		printf("%d and is greater than 5", n);
	else if (n == 6)
		printf("%d and is less than 6 and not 0", n);
	else
		print("%d and is 0", n);
	return (0);
}
