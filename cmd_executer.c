#include "monty.h"
#define SEPARATORS "\n "

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
/* matching list (match the operator with its function) */
instruction_t matcher[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{"add", _add},
{"nop", _nop},
{"sub", _sub},
{"div", _div},
{"mul", _mul},
{"mod", _mod},
{"pchar", _pchar},
{"pstr", _pstr},
{NULL, NULL}
};
unsigned int i = 0;
char *oper = strtok(Ldata, SEPARATORS);
if (oper && oper[0] == '#')
return (0);

data.token = strtok(NULL, SEPARATORS);

while (oper && matcher[i].opcode)
{
if (strcmp(oper, matcher[i].opcode) == 0)
{
matcher[i].f(stack, count);
return (0);
}
i++;
}
/* operators not found */
if (oper && matcher[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", count, oper);
fclose(file);
free(Ldata);
exit(EXIT_FAILURE);
}
return (1);
}
