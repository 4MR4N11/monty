#include "monty.h"

/**
 * isNumber - checks if a string is a number
 * @str: string to check
 * Return: 1 if true, 0 if false
 */

int isNumber(const char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * _push - pushes an element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */

void _push(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!utls.args[1] || !isNumber(utls.args[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	n = atoi(utls.args[1]);
	if (utls.queue)
		add_node_end(stack, n);
	else
		add_node(stack, n);
}
