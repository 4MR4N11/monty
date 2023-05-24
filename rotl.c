#include "monty.h"

/**
 * _rotl - rotates the stack to the top
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp2;

	(void)line_number;
	if (!*stack || !(*stack)->next)
		return;
	tmp = *stack;
	tmp2 = (*stack)->next;
	tmp2->prev = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	(*stack)->next = NULL;
	*stack = tmp2;
}
