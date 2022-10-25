/* Print all elements in a Linked List */

# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
  * print_listint - Prints all elements in a linked list
  * @h: head of the linked List
  * c: counter for the number of nodes in the linked list
  * current: variable to hold the value of the head
  * Return: The number of nodes of a linked List
  * Description: It is what it is!
  *
  */

size_t print_listint(const listint_t *h)
{
	size_t c;

	c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}


