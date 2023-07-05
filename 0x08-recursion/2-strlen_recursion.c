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
		result = _strlen_recursion(s);
		result++;
		return (result);
	}
}
