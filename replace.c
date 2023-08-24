#include "monty.h"
/**
 * m_replace -  the head takes two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: not defined
*/
void m_replace(stack_t **head, unsigned int counter)
{
	stack_t *top;
	int len = 0, aux;

	top = *head;
	while (top)
	{
		top = top->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't replace, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	aux = top->n;
	top->n = top->next->n;
	top->next->n = aux;
}
