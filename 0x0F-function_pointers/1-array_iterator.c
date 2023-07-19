#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that executes a functiongiven as a parameter
 * @size: the size of the array
 * @array: the array of functions
 * @action: the function to be performed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != 0 && action != 0 && size > 0)
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
