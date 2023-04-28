#include "lists.h"

/**
 * free_linked_list - Frees a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: void
 */
void free_linked_list(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
