#include "monty.h"

/**
 * rotr - Rotates the stack to bottom.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;
	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;
	bottom->prev->next = NULL;
	(*stack)->next = bottom;
	bottom->prev = *stack;
	bottom->next = top;
	top->prev = bottom;
	(void)line_number;
}
