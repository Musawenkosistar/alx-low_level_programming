#include "lists.h"

/**
 * print_listint - Prints all the components of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: Number of meeting points
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
