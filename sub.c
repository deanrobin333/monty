#include "monty.h"

/**
 * sub - Subtracts the second element from the second top element of the stack
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: Current working line number of Monty bytecodes file.
 */

void sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_last_op_tok(swap_failure(line_number, "sub"));
		return;
	}
	(*stack)->next->next->n -= (*stack)->next->n;
	pop(stack, line_number);
}
