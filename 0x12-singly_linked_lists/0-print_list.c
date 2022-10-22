/* A program that prints all the elements of a linked list */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_list - prints all the elements of a linked list
  * @h: head of the list to be printed
  * n: counter for the nodes in the linked list
  * Description: Program does this very thing
  * Return: returns the number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}

