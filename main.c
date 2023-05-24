#include "monty.h"


utils_t utls;

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: EXIT_SUCCESS or EXIT_FAILURE
*/

int main(int ac, char **av)
{
	char line[BUFFSIZE];
	stack_t *stack = NULL;

	utls.line_n = 0;
	utls.args = NULL;
	utls.queue = 0;
	if (ac == 2)
	{
		utls.file_ptr = fopen(av[1], "r");
		if (utls.file_ptr == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
		}
		utls.args = malloc(sizeof(char *) * 2);
		while (1)
		{
			if (fgets(line, BUFFSIZE, utls.file_ptr) == NULL)
			{
				fclose(utls.file_ptr);
				free(utls.args);
				free_stack(&stack);
				break;
			}
			utls.line_n++;
			parse_line(line, &stack);
		}
		return (EXIT_SUCCESS);
	}
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
