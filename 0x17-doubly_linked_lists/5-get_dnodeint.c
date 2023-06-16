#include "lists.h"
/**
* get_dnodeint_at_index - a function that prints node at index
* @head: pointer to the first node
* @index: index to get node
* Return: new list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head == NULL)
return (NULL);
while (head != NULL)
{
if (index == count)
return (head);
count++;
head = head->next;
}
return (NULL);
}
