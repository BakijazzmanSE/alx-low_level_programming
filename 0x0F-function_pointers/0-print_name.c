#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: the print name function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
