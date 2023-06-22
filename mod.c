#include "monty.h"
/**
 * mod - Computes the modulus of the second top element of
 *             a stack_t linked list by the top element.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: Current working line number of a Monty bytecodes file.
 */

void mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_last_op_tok(swap_failure(line_number, "mod"));
		return;
	}
	if ((*stack)->next->n == 0)
	{
		set_last_op_tok(div_failure(line_number));
		return;
	}
	(*stack)->next->next->n %= (*stack)->next->n;
	pop(stack, line_number);
}
