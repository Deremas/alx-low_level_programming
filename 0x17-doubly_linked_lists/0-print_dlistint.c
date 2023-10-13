#include "lists.h"

/**
 * print_dlistint -  function that prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
