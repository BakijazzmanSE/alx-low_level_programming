#include "main.h"
/**
 * print_most_numbers - function that print numbers from
 * 0-9 and oes not print 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int num;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
			_putchar(num);
		num++;
	}
}
