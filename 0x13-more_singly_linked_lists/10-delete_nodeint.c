#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to pointer of first node of listint_t list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = NULL;
	curr = *head;
	for (i = 0; curr && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}

