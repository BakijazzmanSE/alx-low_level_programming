#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints elements of an array
 * @a: the array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int b, i = 0;

	while (a[i] < n)
	{
		b = n - 1;
		printf("%d, ", a[i]);
		i++;
		if (i == b)
		{
			printf("%d", a[b]);
		}
	}
	printf("\n");
}
