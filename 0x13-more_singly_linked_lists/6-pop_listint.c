#include "lists.h"

/**
 * pop_listint - function that delete head node in the project
 * @head: head to the linked list in the project
 * Return: the data n of the head node in the project
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;

	n = temp->n;
	free(temp);
	return (n);

}

