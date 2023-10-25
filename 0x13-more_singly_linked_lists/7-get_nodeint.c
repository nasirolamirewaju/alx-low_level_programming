#include "lists.h"
/**
  * get_nodeint_at_index - a function that returns the nth
  * node of a listint_t linked list.
  * @head: head of the list.
  * @index: which node to stop at.
  * Return: returns the nth
  * node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
