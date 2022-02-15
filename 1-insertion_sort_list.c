#include "sort.h"
/**
 * swap - function that sorts a doubly linked list of integers
 * @list: list
 * @f: first
 * @s: second
*/
void swap(listint_t **list, listint_t *f, listint_t *s)
{

	if (f == NULL && s == NULL)
		return;
	if (*list == f)
		*list = s;
	if (f->prev != NULL)
		(f->prev)->next = f->next;
	if (s->next != NULL)
		(s->next)->prev = s->prev;
	f->next = s->next;
	s->next = f;
	s->prev = f->prev;
	f->prev = s;
}
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * @list: doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *pre;
	listint_t *cur;
	listint_t *next;

	if (!list)
		return;
	if (*list == NULL && list == NULL)
		return;
	cur = *list;
	while (cur != NULL)
	{
		pre = cur->prev;
		next = cur->next;
		while (pre != NULL && cur->n < pre->n)
		{
			swap(list, pre, cur);
			print_list(*list);
			pre = cur->prev;
		}
		cur = next;
	}
}
