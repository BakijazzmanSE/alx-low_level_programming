#include <stdio.h>
/**
*main - print numbers from 10-0
*Return: 0 success
**/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
