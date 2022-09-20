#include "head.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	if (i % 2 == 1)

	while (j < max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
