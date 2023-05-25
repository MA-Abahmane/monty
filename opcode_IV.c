#include "monty.h"

/**
 * _mod - Calculate the modulo of the two top stack element
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: void
*/
void _mod(stack_t **stack, unsigned int count)
{
	stack_t *copy;
	int val, size = stack_len(*stack);

	copy = *stack;

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


/**
 * _pchar - print the value of the caracter number
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: NONE
*/
void _pchar(stack_t **stack, unsigned int count)
{
	stack_t *p;

	p = *stack;

	if (p == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE); 
	}

	/* if not a value in the ascii table */
	if (p->n < 0 || p->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(data.file);
		free(data.content);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", p->n);
}


/**
 * _pstr - print the values of each character number
 * @stack: Pointer to stack pointer
 * @count: Line number
 * Return: NONE
*/
void _pstr(stack_t **stack, unsigned int count)
{
	stack_t *p;
	(void)count;

	p = *stack;

	while (p != NULL)
	{
		/* if not a value in the ascii table or is 0 */
		if (p->n <= 0 || p->n > 127)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	putchar('\n');
}

