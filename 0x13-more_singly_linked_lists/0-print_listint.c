#include "lists.h"

/**
 * print_listint -  it's show  all  elements of a linked list all
 * @h: it's constant for linked list of type listint_t to help print
 *
 * Return:   what's number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t pr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		pr++;
		h = h->next;
	}
	/*end of program with retarn pr.size_t*/
	return (pr);
}
