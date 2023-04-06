#include "main.h"

/**
 * _put recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
