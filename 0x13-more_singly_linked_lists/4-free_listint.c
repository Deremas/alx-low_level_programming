#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 *@head: pointer to pointer of head of linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new_node = head;
	listint_t *temp;

	while (new_node != NULL)
	{
		temp = new_node;
		new_node = new_node->next;
		free(temp);
		head = NULL;
	}
}
