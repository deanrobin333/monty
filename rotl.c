#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: A pointer to the top node of a stack_t linked list.
 * @line_number: current working line number of a Monty bytecodes file.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;
	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;
	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;
	(void)line_number;
}
