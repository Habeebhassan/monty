#include "monty.h"
/**
 * m_display - list stack
 * @head: stack top
 * @counter: not defined
 * Return: not defined
 *
*/
void m_display(stack_t **head, unsigned int counter)
{
	stack_t *top;
	(void)counter;

	top = *head;
	if (top == NULL)
		return;
	while (top)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
