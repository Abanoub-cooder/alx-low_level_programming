#include "lists.h"

/**
 * add_nodeint_end - adtional node to  the end of a linked list
 * @head: a pointet  refer to the  first element
 * @n: parameter to insert in the w element
 *
 * Return: pointer to the w node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *end = *head;

	w = malloc(sizeof(listint_t));
	/*that mean if w = NULL return null */
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;
	/* do --while will give us only 1024*/
	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (end->next)
		end = end->next;

	end->next = w;

	return (w);
}

