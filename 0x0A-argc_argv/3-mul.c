#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
