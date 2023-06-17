#include <stdio.h>
/**
 * main - prints alphabet in lowercase followed by a line
 *
 * Return: 0 always success
 *
 *
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
