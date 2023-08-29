#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list and sets head to NULL
 *@head: pointer to pointer of head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;
	listint_t *temp;

	if (!head)
		return;
	new_node = *head;
	while (*head)
		while (new_node)
		{
			temp = new_node;
			new_node = new_node->next;
			free(temp);
			*head = NULL;
		}
}
