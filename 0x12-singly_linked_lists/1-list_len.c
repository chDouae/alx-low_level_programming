#include <stdio.h>
#include "lists.h"

/**
  *list_len- a fonctions that return the number of element in a linked list
  *@h: a pointer to list-len  list
  *Return:the number of elements
  */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
	h = h->next;
	}
	return (a);
}

