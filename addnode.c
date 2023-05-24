#include "monty.h"

/**
 * add_node - adds a new node at the beginning of a stack_t list
 * @stack: pointer to the stack
 * @n: value of the new node
 */

void add_node(stack_t **stack, int n)
{
	stack_t *new, *tmp;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!tmp)
	{
		*stack = new;
		return;
	}
	tmp->prev = new;
	new->next = tmp;
	*stack = new;
}

/**
 * add_node_end - adds a new node at the end of a stack_t list
 * @stack: pointer to the stack
 * @n: value of the new node
*/

void add_node_end(stack_t **stack, int n)
{
	stack_t *new, *tmp;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(utls.file_ptr);
		free(utls.args);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!tmp)
	{
		*stack = new;
		return;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
}
