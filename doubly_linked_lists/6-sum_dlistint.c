#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) in the list
 */
int sum_dlistint(dlistint_t *head)
{
int i = 0;
while (head != NULL)
{
i = i + head->n;
head = head->next;
}
return (i);
}
