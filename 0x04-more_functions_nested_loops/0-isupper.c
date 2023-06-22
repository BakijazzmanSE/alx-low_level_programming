#include "main.h"
/**
 * _isupper - a function that checks for uppercase characters
 * @c: the uppercase
 * Return: 1 if c is uppercase otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
