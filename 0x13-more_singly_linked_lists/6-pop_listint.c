#include "lists.h"
/**
 * pop_listint - make deletes for  a head node  to any linked list
 * @head: parameter pointer to the first element in linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	/*del= delete or tesmp*/
	listint_t *del;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;
	return (n);
}

