#include "monty.h"

/**
 * _pop - a function that remove the first node in a list
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _pop(stack_t **stack, unsigned int count)
{
	stack_t *p;

	p = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;
	free(p);
}

/**
 * _swap - a function that remove the first node in a list
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _swap(stack_t **stack, unsigned int count)
{
	stack_t *p;
	int size = 0, val;

	/* check list contains less than two elements */
	p = *stack;
	while (p)
	{
		p = p->next;
		size++;
	}

	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	/* switching values */
	p = *stack;
	val = p->n;
	p->n = p->next->n;
	p->next->n = val;
}

/**
 * _add - a function that adds the top two elements of the stack.
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _add(stack_t **stack, unsigned int count)
{
	stack_t *p;
	int size = 0, val;

	/* check list contains less than two elements */
	p = *stack;
	while (p)
	{
		p = p->next;
		size++;
	}

	if (size < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	p = *stack;
	val = p->n + p->next->n;
	p->next->n = val;

	*stack = p->next;
	free(p);
}