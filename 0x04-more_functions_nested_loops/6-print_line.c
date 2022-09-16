#include "main.h"

/**
 * print_line - draws a straight line
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int linse = 0;

	while (lines < n)
	{
		_putchar('_');
		lines++;
	}
	_putchar('\n');
}
