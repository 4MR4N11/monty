#include "monty.h"

/**
 * stack_queue - sets the format of the data to a stack (LIFO) or queue (FIFO)
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: 0 on success, 1 on failure
*/

void stack_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	if (strcmp(utls.args[0], "stack") == 0)
		utls.queue = 0;
	else if (strcmp(utls.args[0], "queue") == 0)
		utls.queue = 1;
}
