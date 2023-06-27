#include "main.h"
/**
 * puts2 - function tha  prints every other character starting
 * with the first and followed by anew line
 * @str: the string to  be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

