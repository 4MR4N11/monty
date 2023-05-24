#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
