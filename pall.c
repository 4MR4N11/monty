#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: pointer to the stack
 * @line_number: line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void)line_number;
	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
