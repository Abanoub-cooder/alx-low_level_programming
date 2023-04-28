#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a ad node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: ad string to add in the node
 *
 * Return: the address of the ad element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ad;
	unsigned int len = 0;

	while (str[len])
		len++;
	/*blank line */
	ad = malloc(sizeof(list_t));
	if (!ad)
		return (NULL);
	/*intializtion to ad */
	ad->str = strdup(str);
	ad->len = len;
	ad->next = (*head);
	(*head) = ad;
	/*end */
	return (ad);
}
