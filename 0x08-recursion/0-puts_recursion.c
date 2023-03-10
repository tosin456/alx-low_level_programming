#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: thes tring to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
