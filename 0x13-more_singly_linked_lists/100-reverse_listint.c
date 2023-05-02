
#include "lists.h"
/**
 * reverse_listint - its allocate and reverses a linked list
 * @head: prameter pointer refedr to the first node at the list
 *
 * Return: prameter pointer for the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rvs = NULL;
	listint_t *next = NULL;
	/*we use while loop*/
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rvs;
		rvs = *head;
		*head = next;
	}
	/*make the end equal null*/
	*head = rvs;

	return (*head);
}

