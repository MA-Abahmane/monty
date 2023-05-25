#include "monty.h"

/**
 * _push - Push value to the stack
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: void
*/
void _push(stack_t **stack, unsigned int count)
{
char *value = data.token;
if (value == NULL || !is_number(value))
{
	fprintf(stderr, "L%d: usage: push integer\n", count);
	exit(EXIT_FAILURE);
}
add_dnodeint(stack, atoi(value));
}

/**
 * _pall - Print all stack values
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: void
*/
void _pall(stack_t **stack, unsigned int count)
{
	(void)count;
	print_dlistint(*stack);
}
