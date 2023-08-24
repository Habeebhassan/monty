#include "monty.h"
/**
 * m_printop -lists the top
 * @head: stack head
 * @counter: line_number
 * Return: not defined
*/
void m_printop(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
