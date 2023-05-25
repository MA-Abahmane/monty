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

/**
 * add_node_end - Add new node to the end of a dlistint
 * @head: The double linked list head
 * @n: Node value
 * Return: New node address or NULL
 */
stack_t *add_node_end(stack_t **head, const int n)
{
stack_t *new, *prev_node;
new = malloc(sizeof(struct stack_s));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;
if ((*head) == NULL)
{
	new->prev = NULL;
	(*head) = new;
	return (*head);
}
prev_node = (*head);
while (prev_node->next != NULL)
{
	prev_node = prev_node->next;
}
prev_node->next = new;
new->prev = prev_node;
return (new);
}
