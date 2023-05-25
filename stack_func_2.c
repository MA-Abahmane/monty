#include "monty.h"

/**
 * free_dlistint - Free a dlistint
 * @head: Double linked list head
 * Return: void
*/
void free_dlistint(stack_t *head)
{
stack_t *next;
while (head != NULL)
{
	next = head->next;
	free(head);
	head = next;
}
}
