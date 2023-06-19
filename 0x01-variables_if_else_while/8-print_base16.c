#include <stdio.h>
/**
 * main - prints al=l numbers of base 16 followed by a new line
 *
 * Return: 0 always success
 *
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
