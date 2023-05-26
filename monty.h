#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>

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
 * the execution Information we need.
 * @file: The file we are reading from.
 * @content: the line we are reading from the file
 * @token: its passed with the opcode value
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

/* Function declarations */
int cmd_executer(FILE *file, char *Ldata, stack_t **stack, unsigned int count);
void add_node(stack_t **stack, int n);
void add_node_end(stack_t **stack, const int n);
void free_stack(stack_t *stack);
size_t stack_len(const stack_t *h);
int is_number(char *str);

/* opcode functions */
void _push(stack_t **stack, unsigned int count);
void _pall(stack_t **stack, unsigned int count);
void _pint(stack_t **stack, unsigned int count);
void _pop(stack_t **stack, unsigned int count);
void _swap(stack_t **stack, unsigned int count);
void _add(stack_t **stack, unsigned int count);
void _nop(stack_t **stack, unsigned int count);
void _sub(stack_t **stack, unsigned int count);
void _div(stack_t **stack, unsigned int count);
void _mul(stack_t **stack, unsigned int count);
void _mod(stack_t **stack, unsigned int count);
void _pchar(stack_t **stack, unsigned int count);
void _pstr(stack_t **stack, unsigned int count);
void _rotl(stack_t **stack, unsigned int count);
void _rotr(stack_t **stack, unsigned int count);

#endif
