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
