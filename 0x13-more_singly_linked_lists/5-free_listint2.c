
#include "lists.h"
/**
 * free_listint2 - clean and frees any  linked list
 * @head: paramater pointer make  the listint_t list  free
 */
void free_listint2(listint_t **head)
{
	/*or mean temp*/
	listint_t *or;

	if (head == NULL)
		return;

	/*while not do while*/
	while (*head)
	{
		or = (*head)->next;
		free(*head);
		*head = or;
	}

	*head = NULL;
}

