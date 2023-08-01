#include "lists.h"

/**
 * get_nodeint_at_index - Returns the meeting point at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: Pointer to the meeting point we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index
{
	unsigned int count = 0;

	while (count < index)
	{

		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}
	return (head);
}
