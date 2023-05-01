#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list
 * @head: head of list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int rnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
	{
		return (0);
	}
	curr = *head;
	rnode = curr->n;
	h = curr->next;

	free(curr);
	*head = h;
	return (rnode);
}
