#include <stdlib.h>
#include "lists.h"

/**
* free_list - program that frees a linked list
* @head: paramter for list_t list to be freed
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

