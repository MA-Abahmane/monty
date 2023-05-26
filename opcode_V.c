#include "monty.h"

/**
 * _stack - Sets the format of the data to a stack (LIFO)
 * @stack: Stack to manipulate
 * @count: Line number
 * Return: void
*/
void _stack(stack_t **stack, unsigned int count)
{
	(void)stack;
	(void)count;
	data.mode = 0;
}

/**
 * _queue - Sets the format of the data to a queue (FILO)
 * @stack: Stack to manipulate
 * @count: Line number
 * Return: void
*/
void _queue(stack_t **stack, unsigned int count)
{
	(void)stack;
	(void)count;
	data.mode = 1;
}
