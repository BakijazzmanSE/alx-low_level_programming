#include "main.h"
/**
 * print_line - function that draws a straight line on the terminal
 * @n: the number of times the _ should be printed 
 * Return: nothing
 */
void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int line;

		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
