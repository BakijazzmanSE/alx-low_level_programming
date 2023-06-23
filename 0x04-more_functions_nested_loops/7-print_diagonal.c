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
		_putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n; col++)
			{
				if (row == col)
				
					_putchar('\\');
				
				else if (col < row)
				
					_putchar(' ');
				
			}
			_putchar('\n');
		}
	}
}
