#include "lists.h"

/**
 * pop_listint - Removes the head meeting point of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The data inside the components that was removed
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
