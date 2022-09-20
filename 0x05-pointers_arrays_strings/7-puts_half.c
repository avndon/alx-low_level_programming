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
	max = i + 1;
	j = max / 2;
	if (i % 2 == 1)
		j + 1;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
