#include <stdio.h>
/**
* main - print reversed alphabeth
*
* Return: 0 success
*/
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
