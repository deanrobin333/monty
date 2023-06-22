#include "monty.h"
/**
 * divide - Divides the second top element of the stack by
 *             the top element of the stack.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 * Return: void
 */

void divide(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_last_op_tok(swap_failure(line_number, "div"));
		return;
	}
	if ((*stack)->next->n == 0)
	{
		set_last_op_tok(div_failure(line_number));
		return;
	}
	(*stack)->next->next->n /= (*stack)->next->n;
	pop(stack, line_number);
}
