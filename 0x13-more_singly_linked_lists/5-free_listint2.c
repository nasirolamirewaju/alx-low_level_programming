#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - a function that frees a listint_t list.
  * @head: double pointer to head of list.
  * void: frees a listint_t list.
  */
void free_listint2(listint_t **head)
{
	listint_t *temporary, *current_location;

	if (!head)
	{
		return;
	}

	current_location = *head;
	while (current_location)
	{
		temporary = current_location;
		current_location = current_location->next;
		free(temporary);
	}

	*head = NULL;
}
