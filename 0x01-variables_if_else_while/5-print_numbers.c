#include <stdio.h>
/**
 * main - print numbers from 0-9
 *
 * Return: 0 success
 *
 *
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
