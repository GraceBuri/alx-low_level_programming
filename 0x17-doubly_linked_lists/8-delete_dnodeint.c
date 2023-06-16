#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	dlistint_t *previous = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	if (previous == NULL)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		previous->next = current->next;
		if (current->next != NULL)
			current->next->prev = previous;
	}

	free(current);
	return (1);
}
