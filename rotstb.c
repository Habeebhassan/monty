#include "monty.h"
/**
  *m_rotstb - spin stack to bottom
  *@head: stack head
  *@counter: line_number
  *Return: declared not defined
 */
void m_rotstb(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
