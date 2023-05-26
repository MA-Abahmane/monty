#include "monty.h"

/**
 * add_node - Add a node to the stack
 * @stack: the stack to manipulate
 * @n: Node value
 * Return: void
*/
void add_node(stack_t **stack, int n)
{
stack_t *p, *new_node;

p = *stack;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed");
free_stack(p);
exit(EXIT_FAILURE);
}

new_node->n = n;
new_node->prev = NULL;

/* if stack is not empty */
if (p != NULL)
{
p->prev = new_node;
}
new_node->next = *stack;
*stack = new_node;
}

/**
 * free_stack - Free a stack
 * @stack: Double linked list stack
 * Return: void
*/
void free_stack(stack_t *stack)
{
stack_t *next;
while (stack != NULL)
{
	next = stack->next;
	free(stack);
	stack = next;
}
}


/**
 * stack_len - Count stack nodes
 * @h: Double linked list head
 * Return: size of element printed
*/
size_t stack_len(const stack_t *h)
{
const stack_t *copy = h;
int _size = 0;
while (copy)
{
	_size++;
	copy = copy->next;
}
return ((size_t)_size);
}

/**
 * add_node_end - Add new node to the end of a dlistint
 * @stack: The stack to manipulate
 * @n: Node value
 * Return: void
 */
void add_node_end(stack_t **stack, const int n)
{
stack_t *new, *prev_node;
new = malloc(sizeof(struct stack_s));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed");
free_stack(*stack);
exit(EXIT_FAILURE);
}
new->n = n;
new->next = NULL;
if ((*stack) == NULL)
{
	new->prev = NULL;
	(*stack) = new;
}
prev_node = (*stack);
while (prev_node->next != NULL)
{
	prev_node = prev_node->next;
}
prev_node->next = new;
new->prev = prev_node;
}
