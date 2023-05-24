#include "monty.h"
#define SEPARATORS " \t\n"

int cmd_executer(FILE *file, char *Ldata, stack_t **stack, unsigned int count)
{
unsigned int i;
char *oper;

/* matching list (match the operator with its function) */
instruction_t matcher[] = {
{"push", _push},
{"pall", _pall},
{NULL, NULL}
};

/* get the operators from the given string using strtok() */
oper = strtok(Ldata, SEPARATORS);
/* save the operators argument for future use */
data.token = strtok(NULL, SEPARATORS);

i = 0;
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
