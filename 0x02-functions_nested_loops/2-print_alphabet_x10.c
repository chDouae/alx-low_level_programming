#include "main.h"

/**
  *vi 2-print_alphabet_x10.c - Make alphabet x10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
