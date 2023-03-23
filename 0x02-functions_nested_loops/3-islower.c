#include "main.h"
/**
  *_islower - cheks for lowcase characters
  * @c the character to be checked
  * Return :  for lowercase characters 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

