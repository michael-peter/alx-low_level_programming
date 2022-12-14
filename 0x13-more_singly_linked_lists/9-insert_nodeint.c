#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at nth position
 * @head: pointer to head of list
 * @idx: index to insert into
 * @n: property n of new node
 * Return: head of list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int curr_idx;
	listint_t *node, *head_ref;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;

		return (node);
	}

	curr_idx = 0;
	head_ref = *head;
	while ((curr_idx < idx) && head_ref)
	{
		if (curr_idx == (idx - 1))
		{
			node->next = head_ref->next;
			head_ref->next = node;

			return (node);
		}
		else
			head_ref = head_ref->next;

		curr_idx++;
	}

	return (NULL);
}
