#include "lists.h"

/**
 * count_list_nodes - Counts the number of nodes in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t count_list_nodes(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
