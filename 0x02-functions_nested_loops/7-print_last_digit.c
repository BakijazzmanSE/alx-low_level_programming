#include "main.h"
/**
 * print_last_digit - a function that prints last digit
 * Return: value of the last digit
 * @num: last digit parameter/arguement
 *
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;
	if (num < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
