#include "monty.h"

/**
 * _mod - computes the rest of the division of the second top element
 * of the stack by the top element of the stack
 * @stack: pointer to the stack
 * @line_number: line number
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	if (n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	_pop(stack, line_number);
	(*stack)->n %= n;
}
