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
(void)count;

int n, i;

/* if the opcodes token is true and is a digit */
if (data.token)
{

i = 0;
while (data.token[i] != '\0')
{
if (data.token[i] < 48 || data.token[i] > 57)
{
fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);
}
i++;
}
/* if number is not passed */
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);
}

n = atoi(data.token);
add_node(stack, n);
}


/**
 * _pall - a function that prints all values of a list
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _pall(stack_t **stack, unsigned int count)
{
(void)count;

stack_t *p;

p = *stack;
if (p == NULL)
  return;
  
while (p != NULL)
{
  printf("%d\n", p->n);
  p = p->next;
}
  
}


/**
 * _pint - a function that print the value of the first node
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _pint(stack_t **stack, unsigned int count)
{

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);  
}

printf("%d\n", (*stack)->n);
}
