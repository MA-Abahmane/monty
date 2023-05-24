#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Given data structures for this project */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* Our data structures */

/**
 * struct execution_info - a structure used to store 
 *   the execution Information we need.
 *
 * @file: The file we are reading from.
 * @content: the line we are reading from the file
 * @val: its passed with the opcode value
 * @mode: the inserting mode (Stack / Queue)
 */
typedef struct execution_info
{
FILE *file;
char *content;
char *token;
int mode;

} e_info;

extern e_info data;

/**
 * Stack functions declaration
*/
stack_t *add_dnodeint(stack_t **head, const int n);
stack_t *add_dnodeint_end(stack_t **head, const int n);
size_t dlistint_len(const stack_t *h);
void free_dlistint(stack_t *head);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
size_t print_dlistint(const stack_t *h);

/* Function declarations */
int cmd_executer(FILE *file, char *Ldata, stack_t **stack, unsigned int count);


/* opcode functions */
void _push(stack_t **stack, unsigned int count);
void _pall(stack_t **stack, unsigned int count);

#endif /* MAIN_H */
