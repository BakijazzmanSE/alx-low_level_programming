#include "main.h"
/**
 * times_table - print times table of 9
 * Return: nothing
 *
 */
void times_table(void)
{
	int times, time, result;

	for (times = 0; times < 10; times++)
	{
		for (time = 0; time < 10; time++)
		{
			result = time * times;
			if (result < 10)
			{
				if (time != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (time != 0)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
