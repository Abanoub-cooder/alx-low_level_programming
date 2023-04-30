#include "lists.h"
/**
 * add_nodeint - addtion a new node to the beginn of list
 * @head: parameter pointer refer to the first node in the list
 * @n: arument  to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/*mallok to allocate only space what we need */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	/*here we close the new nube by make it null*/
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

