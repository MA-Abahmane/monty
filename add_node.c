#include "monty.h"


void add_node(stack_t **stack, int n)
{
stack_t *p, *new_node;

p = *stack;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed");
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