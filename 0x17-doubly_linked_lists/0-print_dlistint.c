#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes
 * Author: Gamachu AD
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
