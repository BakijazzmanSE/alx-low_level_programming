#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * @str the string parameter
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n = i / 2;
		while (str[n] < i)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
