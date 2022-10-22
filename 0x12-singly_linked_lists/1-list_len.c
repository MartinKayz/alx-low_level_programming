/* Function that returns the number of elements in the Linked List */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * list_len - returns the number of elements in the linked list
  * n: counts number of elements in the linked list
  * @h: the list being passed to he function
  * Return: the number of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

