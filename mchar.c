#include "monty.h"
/**
 * m_mchar - List the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: not defined
*/
void m_mchar(stack_t **head, unsigned int counter)
{
	stack_t *top;

	top = *head;
	if (!top)
	{
		fprintf(stderr, "L%d: can't print character, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (top->n > 127 || top->n < 0)
	{
		fprintf(stderr, "L%d: can't print char, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}
