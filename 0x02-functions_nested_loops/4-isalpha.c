#include "holberton.h"
/**
*_isalpha - write a function that checks for alphabet character
*
*Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))

		return (1);

	else
		
		return (0);
}
