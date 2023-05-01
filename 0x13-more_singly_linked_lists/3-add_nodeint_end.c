#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	new->next = NULL;
	return (*head);
}
