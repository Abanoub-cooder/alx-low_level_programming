#include "lists.h"

/**
 * listint_len - function that return the nber of elements at linked lists
 * @h: pointer parameter for  traverse
 *
 * Return: the number of nod
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{

		n++;
		h = h->next;
		/*we can replace of n++*/
	}

	return (n);
}


