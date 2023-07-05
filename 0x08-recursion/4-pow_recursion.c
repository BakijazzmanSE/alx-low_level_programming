#include "main.h"
/**
 * _pow_recursion - raise an integer to the power of other
 * @x: number 1
 * @y: number 2
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
