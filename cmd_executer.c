#include "monty.h"
#define SEPARATORS " \n\t"

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
char *oper = strtok(Ldata, SEPARATORS);
data.token = strtok(NULL, SEPARATORS);

if (!oper || get_instruction_func(oper) == NULL)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", count, oper);
	fclose(file);
	free(Ldata);
	exit(EXIT_FAILURE);
}
else
{
	get_instruction_func(oper)(stack, count);
}
return (1);
}
