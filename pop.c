#include "monty.h"

/**
 * pop - Removes the top element of a stack_t linked list.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;

	if ((*stack)->next == NULL)
	{
		set_last_op_tok(pop_failure(line_number));
		return;
	}
	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}
