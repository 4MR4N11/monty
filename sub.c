#include "monty.h"

/**
 * _sub - subtracts the top element of the stack from the second top element
 * @stack: pointer to the stack
 * @line_number: line number
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n -= n;
}
