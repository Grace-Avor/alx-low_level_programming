#include "main.h"

/**
 * _strcmp - compares two strings
 * @n1: first string to compare
 * @n2: second string to compare
 *
 * Return: less than 0 if n1 is less than n2, 0 if they're equal,
 * more than 0 if n1 is greater than n2
 */
int _strcmp(char *n1, char *n2)
{
	while (*n1 == *n2)
	{
		if (*n1 == '\0')
		{
			return (0);
		}
		n1++;
		n2++;
	}
	return (*n1 - *n2);
}
