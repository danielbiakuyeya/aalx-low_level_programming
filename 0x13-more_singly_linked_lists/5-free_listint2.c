#include "lists.h"

/**
 * free_listint2 - frees linked list in the project
 * @head: head of the linked list in the project
 * Return: should return void on success
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
