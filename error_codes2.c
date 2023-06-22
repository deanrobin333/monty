#include "monty.h"

/**
 * pint_failure - Prints pint error messages.
 * @line_number: Line number in Monty bytecodes file containing error.
 * Return: EXIT_FAILURE.
 */

int pint_failure(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pop_failure - Prints pop failure messages for empty stacks.
 * @line_number: Line number in script where error occured.
 * Return: EXIT_FAILURE
 */

int pop_failure(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * swap_failure - Prints error messages for stacks smaller than 2 nodes
 * @line_number: Line number in Monty bytecodes file containing error.
 * @op: Operation where the error occurred.
 * Return: EXIT_FAILURE
 */

int swap_failure(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

