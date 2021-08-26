#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 * */
int main()
{
	printf("size of int:%zu bytes\n", sizeof(int));
	printf("size of float:%zu bytes\n", sizeof(float));
	printf("size of double:%zu bytes\n", sizeof(double));
	printf("size of char:%zu bytes\n", sizeof(char));
	
	return (0);
}
