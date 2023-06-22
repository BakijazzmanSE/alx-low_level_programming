#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the
 * terminal
 * @n: the number of times \ character is printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		-putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (row == col)
				{
					_putchar('\\');
				}
				else if (col < row)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
