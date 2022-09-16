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
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
