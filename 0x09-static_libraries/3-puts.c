#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str:the string to be pinted
 * Return: nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
