#include <header.h>

/**
 * main - print putchar
 *
 * Description - print putchar
 *
 * Returm Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

