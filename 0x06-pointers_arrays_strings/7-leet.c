#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s: string array
 *
 * Return: string array
 */

char *leet(char *s)
{
	int i, temp;

	for (i = 0; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
