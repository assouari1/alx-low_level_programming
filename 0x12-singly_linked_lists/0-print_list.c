<<<<<<< HEAD
#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a linked list.
* @h: pointer to the list_t list printed.
* return: the number of nodes printed.
*/
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
=======
#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node_count += 1;
	}

	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
>>>>>>> 9c532c8d6debb88e4734601547bcff8f3acfed6c
}
