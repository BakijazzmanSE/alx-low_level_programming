#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: is the digit
 * Return: 1 if c is a digit and 0 otherwise 
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
