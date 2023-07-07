#include <stdio.h>
/**
 * main - prints the arguements it reccieves
 * @argc: count
 * @argv: value
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
