#include "lists.h"
/**
 * insert_nodeint_at_index - additional a adnew node at a linked list,
 * in a spcefic position
 * @head:  prameter pointer to the first node in the list
 * @idx: prameter express about  index where the adnew node is added
 * @n: data to insert in the adnew node
 *
 * Return: pointer to the adnew node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int v;
	listint_t *adnew;
	listint_t *tmp = *head;

	adnew = malloc(sizeof(listint_t));
	if (!adnew || !head)
		return (NULL);

	adnew->n = n;
	adnew->next = NULL;

	if (idx == 0)
	{
		adnew->next = *head;
		*head = adnew;
		return (adnew);
	}
	/*iam search about alteranative for this if you found*/
	for (v = 0; tmp && v < idx; v++)
	{
		if (v == idx - 1)
		{
			adnew->next = tmp->next;
			tmp->next = adnew;
			return (adnew);
		}
		else
			tmp = tmp->next;
	}
	/*that mean here this is the lst node because null*/
	return (NULL);
}
