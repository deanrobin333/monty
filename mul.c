#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack
 *             with the top element of the stack.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 */

void mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_last_op_tok(swap_failure(line_number, "mul"));
		return;
	}


	(*stack)->next->next->n *= (*stack)->next->n;
	pop(stack, line_number);
}

