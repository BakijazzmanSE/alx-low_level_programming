#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: int length
 */

int _strlen_recursion(char *s)
{
	int result;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		result = (1 + _strlen_recursion(s + 1));
		return (result);
	}
}
