#include "lists.h"

/**
 * listint_len - prints the number of elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

