#include "main.h"
/**
 * print_alphabet - printing andd header files
 *
 * Return: 0 success
 *
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

}
