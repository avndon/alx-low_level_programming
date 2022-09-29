#include "main.h"

/**
 * _puts_recursion - prints a new string
 *
 * @s: string
 *
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
