#include "lists.h"

/**
 * *add_nodeint_end - function adds new node to end of listint_t
 *@head: pointer to pointer of head of linked list
 *@n: const int
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *mynew_node = NULL;

	mynew_node = malloc(sizeof(listint_t));
	if (mynew_node == NULL && n != 0)
		return (NULL);
	mynew_node->n = n;
	mynew_node->next = NULL;

	if (*head == NULL)
	{
		*head = mynew_node;
		return (mynew_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = mynew_node;
	return (mynew_node);
}
