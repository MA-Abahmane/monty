#include "monty.h"

/**
 * cmd_executer - Command executor
 * @file: File
 * @Ldata: line
 * @stack: Stack to manipulate
 * @count: Line number
 * Return: 0 on success or 1
*/
int cmd_executer(FILE *file, char *Ldata, stack_t **stack, unsigned int count)
{
char **chunks = split(Ldata);
if (chunks_len(chunks) == 0)
	return (0);

data.token = chunks[0];

if (get_instruction_func(chunks[0]) == NULL)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", count, chunks[0]);
	fclose(file);
	free(Ldata);
	exit(EXIT_FAILURE);
}
else
{
	get_instruction_func(chunks[0])(stack, count);
}
return (1);
}
