#include "lists.h"
/**
 * sum_listint - it's calculates a sum of all the data in a list
 * @head: refer to the first node in list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ms = head;
	/*we use while to write alittle lines*/
	while (ms)
	{
		sum += ms->n;
		ms = ms->next;
	}
	/*return sum all element of list */
	return (sum);
}
