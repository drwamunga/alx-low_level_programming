#include "main.h"
/**
*_isdigit - a functions checks for a digits 0-9
*@c: inputs
*Return: 1 if c is a digit, otherwise 0
*/
int _isdigit(int c)
{
	for ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
