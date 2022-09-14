#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int l = 0;
	char letter = 'a';

	while (l < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		l++;
	}
}

