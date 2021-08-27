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
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	else
		printf("Last digit od %d is %d and is less than 6 and not 0\n", n, b);
	return (0);
}
