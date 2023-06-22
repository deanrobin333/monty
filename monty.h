#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <stdlib.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"
extern char **op_toks;
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

/* ERROR MESSAGES */
int usage_failure(void);
int f_open_failure(char *filename);
int unknown_op_failure(char *opcode, unsigned int line_number);
int malloc_failure(void);
int push_int_failure(unsigned int line_number);
int pint_failure(unsigned int line_number);

/* supporting functions */
void set_last_op_tok(int error_code);
char *get_int(int num);
unsigned int _absolute(int i);
int get_numb_len(unsigned int num, unsigned int base);
void fill_numb_buff(unsigned int num, unsigned int base,
	char *buff, int buff_size);
char **strtow(char *str, char *delims);

/* interpreter functions */
void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);
void free_tokens(void);
unsigned int token_arr_len(void);
int process_monty(FILE *script_fd);


/* Functions */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);

#endif
