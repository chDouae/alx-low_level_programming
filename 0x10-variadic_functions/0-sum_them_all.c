#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all- a function returns the sum of parameters
  *
  *@n: number of parameter in the function
  *@...: variable number of parameters
  *Return: sum of parameters
  **/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
