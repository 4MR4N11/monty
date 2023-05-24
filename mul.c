#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack with the top element
 * @stack: pointer to the stack
 * @line_number: line number
*/

void _mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n *= n;
}
