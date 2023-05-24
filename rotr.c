#include "monty.h"

/**
 * _rotr - rotates the stack to the bottom
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp2;

	(void)line_number;
	if (!*stack || !(*stack)->next)
		return;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp2 = tmp->prev;
	tmp2->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	*stack = tmp;
}
