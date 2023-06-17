#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - thi program prints last digits and
 * check if its greater than or less than
 * 5,6,0
 *
 * Return: 0 always success
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo = n % 10;
	if ((modulo != 0) && (modulo < 6))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
	}
	else if (modulo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, modulo);
	}

	return (0);
}
