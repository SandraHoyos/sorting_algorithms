#include "sort.h"
/**
 * insertion_sort_list - performs an in-place function sort
 *@list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *tmp = NULL;
	listint_t *keep = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	head = (*list)->next;
	while (head)
	{
		tmp = head->prev;
		keep = head->next;
		while (tmp && head->n < tmp->n)
		{
			keep = head->next;
			if (tmp->prev != NULL)
				tmp->prev->next = head;
			head->prev = tmp->prev;
			tmp->prev = head;
			head->next = tmp;
			tmp->next = keep;
			if (keep)
				keep->prev = tmp;
			if (!head->prev)
				(*list) = head;
			print_list(*list);
			tmp = head->prev;
		}
		head = keep;
	}
}
