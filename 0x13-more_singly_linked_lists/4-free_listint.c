#include "lists.h"
/**
 * free_listint - its for clean and frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	/*clean means free and vesa versa*/
	listint_t *clean;

	while (head)
	{
		clean = head->next;
		free(head);
		head = clean;
	}
}
