#include "lists.h"

/**
 * add_nodeint- adds a new node at the beginning of a linked list
 * @head: pointer to 1st node
 * @n: data to insert
 * return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (null);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
