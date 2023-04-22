#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, I;

	for (m = 48; m < 58; m++)

		for (I = 50; I < 58; I++)

			if (I > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(I);

				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
