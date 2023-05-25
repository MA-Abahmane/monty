#include "monty.h"


/**
 * _nop - nothing lol
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _nop(stack_t **stack, unsigned int count)
{
(void) stack;
(void) count;
}


/**
 * _sub - a function that subs the top two elements of the stack.
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _sub(stack_t **stack, unsigned int count)
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
fprintf(stderr, "L%d: can't sub, stack too short\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);  
}

p = *stack;
val = p->next->n - p->n;
p->next->n = val;

*stack = p->next;
free(p);
}


/**
 * _div - a function that devides the top two elements
 *    of the stack.
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _div(stack_t **stack, unsigned int count)
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
fprintf(stderr, "L%d: can't div, stack too short\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);  
}

p = *stack;

if (p->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);  
}

val = p->next->n / p->n;
p->next->n = val;

*stack = p->next;
free(p);
}



/**
 * _mul - a function that multiplys the top two elements
 *    of the stack.
 * @stack: the data structures to manipulate.
 * @count: the line we are reading from in the file.
 *
 * Return: NONE
 */
void _mul(stack_t **stack, unsigned int count)
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
fprintf(stderr, "L%d: can't mul, stack too short\n", count);
fclose(data.file);
free(data.content);
exit(EXIT_FAILURE);  
}

p = *stack;


val = p->n * p->next->n;
p->next->n = val;

*stack = p->next;
free(p);
}
