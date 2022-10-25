/* Returns the number of elements in a linked list */

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: head of the list
  * n: Holding the number of elements of the list
  * Description - It is what it is
  * Return: The number of elements in a linked list
  */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}


