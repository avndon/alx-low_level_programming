#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers separated by a comma
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fn1 = 0, fn2 = 1, sum;
	unsigned long fn1_h1, fn1_h2, fn2_h1, fn2_h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fn1 + fn2;
		printf("%lu, ", sum);

		fn1 = fn2;
		fn2 = sum;
	}
	fn1_h1 = fn1 / 10000000000;
	fn2_h1 = fn2 / 10000000000;
	fn1_h2 = fn1 % 10000000000;
	fn2_h2 = fn2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = fn1_h1 + fn2_h1;
		h2 = fn1_h2 + fn2_h2;

		if (fn1_h2 + fn2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		fn1_h1 = fn2_h1;
		fn1_h2 = fn2_h2;
		fn2_h1 = h1;
		fn2_h2 = h2;
	}
	printf("\n");
	return (0);
}
