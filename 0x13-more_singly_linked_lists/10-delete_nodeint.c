#include "lists.h"
/**
 * delete_nodeint_at_index - making delete a node in a linked list at a certain index
 * @head: prameter pointer to the first element in the list
 * @index: it's index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *present = NULL;
	unsigned int i = 0;
	/*check here of head equal nall*/
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	/*if equal null he will not complete*/

	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	present = tmp->next;
	tmp->next = present->next;
	/*make  free here */
	free(present);
	return (1);
}

