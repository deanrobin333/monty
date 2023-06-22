#include "monty.h"

/**
 * add - Adds the top two elements of a stack_t linked list.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: Current working line number of a Monty bytecodes file.
 * Description: Top value is removed
 *				as result is stored in the second value node.
 */

void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_last_op_tok(swap_failure(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);
}
