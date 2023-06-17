#include <stdio.h>
/**
 * main - print letters of alpha excluding q,e
 *
 * Return: 0 success
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'e') || (alpha == 'q'))
		{
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
