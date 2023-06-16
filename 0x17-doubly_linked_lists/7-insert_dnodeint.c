#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	head = *h;
	while (head != NULL && i < idx - 1)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = head;
	new->next = head->next;
	head->next->prev = new;
	head->next = new;

	return (new);
}
