#include <stdio.h>
/**
 * main - print fizz and buzz
 * Return: 0 success
 */
int main(void)
{
	int num1;

	for (num1 = 1; num1 <= 100; num1++)
	{
		if (num1 % 3 == 0 && num1 % 5 == 0)
		{
			printf("FizzBuss ");
		}
		else if (num1 % 3 == 0 && num1 % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num1 == 100)
		{
			printf("Buzz");
		}
		else if (num1 % 5 == 0 && num1 % 3 != 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", num1);
		}
	}

	return (0);
}
