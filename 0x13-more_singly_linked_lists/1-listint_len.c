#include <string.h>
#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked list
 *@h : linked list of type listint_t to traverse
 * return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
