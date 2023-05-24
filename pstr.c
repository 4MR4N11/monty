#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int n;

	(void)line_number;
	tmp = *stack;
	while (tmp)
	{
		n = tmp->n;
		if (n <= 0 || n > 127)
			break;
		printf("%c", n);
		tmp = tmp->next;
	}
	printf("\n");
}
