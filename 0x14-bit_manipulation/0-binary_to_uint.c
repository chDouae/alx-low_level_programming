#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @s: string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *s)
{
	int j;
	int d = 0;

	if (!s)
		return (0);

	for (j = 0; s[j]; j++)
	{
		if (s[j] < '0' || s[j] > '1')
			return (0);
		d = 2 * d + (s[j] - '0');
	}

	return (d);
}

