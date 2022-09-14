#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description - a program that prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
