#include "lists.h"

/**
 * get_nodeint_at_index - it 's returns  node in any certain index in list
 * @head: it's the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	/*rnd = */
	listint_t *rnd = head;

	while (rnd && v < index)
	{
		rnd = rnd->next;
		v++;
	}
	/* ? using to  check string */
	return (rnd ? rnd : NULL);
}

