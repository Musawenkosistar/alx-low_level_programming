#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node to the end of a list
 *@head: double pointer to the list_t list
 *@str: the string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	char *_str;

	tail = *head;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	_str = strdup(str);
	if (_str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(_str);
	node->str = _str;
	node->next = '\0';

	if (*head == '\0')
	{
		*head = node;
		return (node);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = node;

	return (tail);

}
