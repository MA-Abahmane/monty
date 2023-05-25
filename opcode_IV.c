#include "monty.h"

/**
 * mod - Calculate the modulo of the two top stack element
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: void
*/
void mod(stack_t **stack, unsigned int count)
{
	stack_t *copy;
	int size = 0, val;

	copy = *stack;
	while (copy)
	{
		copy = copy->next;
		size++;
	}

	if (size < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	copy = *stack;

	if (copy->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	val = copy->next->n % copy->n;
	copy->next->n = val;

	*stack = copy->next;
	free(copy);
}
