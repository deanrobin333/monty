#include "monty.h"

/**
 * pint - Prints the value at the top of a stack_t linked list.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 * Return: Void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_last_op_tok(pint_failure(line_number));
		return;
	}
	printf("%d\n", (*stack)->next->n);
}
