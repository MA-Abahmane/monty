#include "monty.h"

/**
 * get_instruction_func - Get instruction function
 * @str: Instruction
 * Return: void
 */
void (*get_instruction_func(char *str))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t instructions[] = {
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
		{NULL, NULL}};
	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, str) == 0)
			return (instructions[i].f);
		i++;
	}
	return (NULL);
}
