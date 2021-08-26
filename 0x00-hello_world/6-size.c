#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 * */
int main()
	int intType;
	float floatType;
	double doubleType;
	char charType;
{
	/*Sizes of datatype*/
	printf("size of int:%zu bytes\n", sizeof(intType));
	printf("size of int:%zu bytes\n", sizeof(floatType));
	printf("size of int:%zu bytes\n", sizeof(doubleType));
	printf("size of int:%zu bytes\n", sizeof(charType));
	
	return (0);
}
