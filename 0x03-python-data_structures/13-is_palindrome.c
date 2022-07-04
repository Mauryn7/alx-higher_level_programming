#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int palindrome_rec(listint_t **head, listint_t *tail)
{
	if (tail == NULL)
		return (1);

	if (palindrome_rec(head, tail->next) == 1 && (*head)->n == tail->n)
	{
		(*head) = (*head)->next;
		return (1);
	}

	else
		return (0);
}

int is_palindrome(listint_t **head)
{
	if (*head == NULL)
		return (1);

	if ((*head)->next == NULL)
		return (1);

	return (palindrome_rec(head, *head));
}
