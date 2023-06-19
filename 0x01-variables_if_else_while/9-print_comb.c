#include <stdio.h>
/**
 * main - learning the ascii value of digits
 * and printing the possibe combinations of
 * single digits.
 *
 * Return: 0 always success
 *
*/
int main(void)
{
	int ascii0 = 48;
	int asciiComma = 44;
	int asciiSpace = 32;

	while (ascii0 <= 57)
	{
		putchar(ascii0);
		if (ascii0 != 57)
		{
			putchar(asciiComma);
			putchar (asciiSpace);
		}
		ascii0++;
	}
	putchar('\n');

	return (0);
}
