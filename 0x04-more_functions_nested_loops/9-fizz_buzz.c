#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz challenge
 *
 * Description - print Fizz for multiples of 3 and Buzz for multiples
 * of 5, and FizzBuzz for multiples of both
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuz");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
				else
				{
					printf("Buzz");
				}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
