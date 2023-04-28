#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints a name.
  * return nothing
  *@f:  pointer to a function
  *@name: the name to add
  **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
