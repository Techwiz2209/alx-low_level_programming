#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the struct listint_t
 **
 *
 *
 * Return: size_t, num of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (count);
}
