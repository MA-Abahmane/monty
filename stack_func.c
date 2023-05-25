#include "monty.h"

/**
 * add_dnodeint - Add new node to a dlistint or create one
 * @head: The double linked list head
 * @n: Value of the new node
 * Return: address to the new stack_t node
*/
stack_t *add_dnodeint(stack_t **head, const int n)
{
stack_t *new = malloc(sizeof(stack_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = (*head);
if ((*head) != NULL)
	(*head)->prev = new;
(*head) = new;
return (new);
}

/**
 * add_dnodeint_end - Add new node to the end of a dlistint
 * @head: The double linked list head
 * @n: Node value
 * Return: New node address or NULL
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
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

/**
 * dlistint_len - Count dlistint nodes
 * @h: Double linked list head
 * Return: size of element printed
*/
size_t dlistint_len(const stack_t *h)
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
 * delete_dnodeint_at_index - Delete a given node
 * @head: Double linked list head
 * @index: Index of node to delete
 * Return: 1 if successed or -1 if it failed
*/
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
stack_t *copy, *temp;
unsigned int i = 1;
copy = (*head);
if (copy == NULL)
	return (-1);
while (copy->prev != NULL)
	copy = copy->prev;
if (index == 0)
{
	temp = (*head)->next;
	free((*head));
	(*head) = temp;
	if ((*head) != NULL)
		(*head)->prev = NULL;
	return (1);
}
while (copy)
{
	if (index == i - 1)
	{
		temp = copy->prev;
		if (temp)
			temp->next = copy->next;
		else
		{
			temp = copy->next;
			temp->prev = copy->prev;
		}
		free(copy);
		copy = temp;
		return (1);
	}
	i++;
	copy = copy->next;
}
return (-1);
}

/**
 * print_dlistint - Print all nodes of a dlistint
 * @h: Double linked list head
 * Return: size of element printed
*/
size_t print_dlistint(const stack_t *h)
{
const stack_t *copy = h;
int _size = 0;
while (copy)
{
	printf("%d\n", copy->n);
	_size++;
	copy = copy->next;
}
return ((size_t)_size);
}
