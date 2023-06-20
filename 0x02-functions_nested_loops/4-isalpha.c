#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: charcater to be checked
 * Return: 1 if c is lowercase or uppercase/ return 0 otherwise
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
