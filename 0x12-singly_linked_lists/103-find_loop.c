#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *ptr = head;
	listint_t *p = head;

	if (!head)
		return (NULL);

	while (ptr && p && ptr->next)
	{
		ptr = ptr->next->next;
		p = p->next;
		if (ptr == p)
		{
			p = head;
			while (p != ptr)
			{
				p = p->next;
				ptr = ptr->next;
			}
			return (ptr);
		}
	}

	return (NULL);
}


