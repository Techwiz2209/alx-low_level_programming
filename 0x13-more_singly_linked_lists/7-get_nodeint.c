#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to a listint_t struct
 * @index: the index of the node, starting at 0
 *
 * Return: pointer to the struct listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
