#include "monty.h"
/**
 * m_prinstr - list the string from the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: not defined
*/
void m_prinstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
