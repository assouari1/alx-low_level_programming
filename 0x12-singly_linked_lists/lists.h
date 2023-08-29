<<<<<<< HEAD
#ifndef LISTS_H
#define LISTS_H
=======
#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
>>>>>>> 9c532c8d6debb88e4734601547bcff8f3acfed6c

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
 * for Holberton project
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

=======
 * for HOLBERTON project
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


>>>>>>> 9c532c8d6debb88e4734601547bcff8f3acfed6c
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

<<<<<<< HEAD
#endif
=======
#endif /* LIST_H */
>>>>>>> 9c532c8d6debb88e4734601547bcff8f3acfed6c
