#include "main.h"

/**
 * _strien_recursion - returns the length of a string
 * @s: The string to be measured
 *
 * Return: The lenght of the string
 */
int _strien_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strien_recursion(s + 1);
	}

	return (len);
}
