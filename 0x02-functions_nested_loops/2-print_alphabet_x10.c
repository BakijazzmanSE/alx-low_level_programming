#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets *10
 *
 * Return: 0 success
 *
 */
void print_alphabet_x10(void)
{
	int times10;
	char alpha;

	for (times10 = 0; times10 < 10; times10++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
