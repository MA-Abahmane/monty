#include "monty.h"

/**
 * _push - a function that adds a node to a list
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _push(stack_t **stack, unsigned int count)
{
	int n;
	(void)count;

	/* if the opcodes token is true and is a digit */
	if (data.token == NULL || !is_number(data.token))
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(data.file);
		free(data.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

n = atoi(data.token);
if (data.mode == 0)
	add_node(stack, n);
else
{
	if (stack_len(*stack) == 0)
		add_node(stack, n);
	else
		add_node_end(stack, n);
}
}

/**
 * _pall - a function that prints all values of a list
 * @stack: the stack to manipulate
 * @count: the line we are reading from in the file.
 * Return: void
 */
void _pall(stack_t **stack, unsigned int count)
{
stack_t *p;
(void)count;
p = *stack;
while (p != NULL)
{
printf("%d\n", p->n);
p = p->next;
}
free_stack(p);
}

/**
 * _pint - a function that print the value of the first node
 * @stack: the stack to manipulate
 * @count: the line we are reading from in the file.
 * Return: void
 */
void _pint(stack_t **stack, unsigned int count)
{
if (*stack == NULL)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", count);
	fclose(data.file);
	free(data.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
