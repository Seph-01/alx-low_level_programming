#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 * Return: The lenght of string
 */
int _strlen _recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _string_recursion(s + 1);
	}
	return (longit);
}
