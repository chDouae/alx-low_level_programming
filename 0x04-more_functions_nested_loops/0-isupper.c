#include "main.h"
/**
  * _isupper -to check uppercase characters
  *@c: the character to be checked
  *
  *Return: 1 for upercase character 0 for anything else
  */
int _isupper(int c)
{
	if (c >='A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
