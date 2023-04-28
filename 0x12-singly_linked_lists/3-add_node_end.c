#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  its adds a new node at the end of a linked list
 * @head: it's about double pointer to the list_t list
 * @str: it's string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/*last ifgive 3 onlt but  while give us all out put*/
	while (end->next)
		end = end->next;
	end->next = new;
	/*here last return*/
	return (new);
}

