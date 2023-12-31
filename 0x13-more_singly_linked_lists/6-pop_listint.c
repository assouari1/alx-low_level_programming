#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t linked list
* @head: pointer to the first element in the listint_t linked list
*
* Return: the head node’s data (n), or return 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int nm;
if (!head || !*head)
return (0);
nm = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (nm);
}
