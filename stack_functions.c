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
 * free_stack - Free a dlistint
 * @head: Double linked list head
 * Return: void
*/
void free_stack(stack_t *head)
{
stack_t *next;
while (head != NULL)
{
	next = head->next;
	free(head);
	head = next;
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
