#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be cecked for digit
 *
 * Return: 1 if its a digit, other wise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
