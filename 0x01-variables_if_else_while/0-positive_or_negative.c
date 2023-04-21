#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printtf("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);

	return (0);
}
