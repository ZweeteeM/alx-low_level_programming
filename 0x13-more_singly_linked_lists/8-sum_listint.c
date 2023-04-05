#include "lists.h"

/**
 * sum_listint - calculates the sum of all data (n)
 * @head: first node in linked list
 *
 * return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
