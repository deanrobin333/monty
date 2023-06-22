#include "monty.h"

/**
 * nop - Doesnt do anything for the opcode.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: Current working line number of a Monty bytecodes file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

