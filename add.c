#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int sum;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;
	*stack = (*stack)->next;
	free(tmp);
}
