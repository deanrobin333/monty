#include "monty.h"

/**
 * pchar - Prints the character in the top of the stack.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_last_op_tok(pchar_failure(line_number, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		set_last_op_tok(pchar_failure(line_number,
					"value out of range"));
		return;
	}
	printf("%c\n", (*stack)->next->n);
}
