#include "monty.h"


int usage_failure(void);
int f_open_failure(char *filename);
int unknown_op_failure(char *opcode, unsigned int line_number);
int malloc_failure(void);
int push_int_failure(unsigned int line_number);


/**
 * usage_failure- Prints usage error texts
 * Return: EXIT_FAILURE.
 */

int usage_failure(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}


/**
 * f_open_failure - Prints file opening error text with file name.
 * @filename: Name of file that failed to open
 * Return: EXIT_FAILURE
 */

int f_open_failure(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_failure - Prints unknown instruction error text.
 * @opcode: Opcode where error was found.
 * @line_number: Line no. in Monty bytecodes file where unknown instruction is.
 * Return: EXIT_FAILURE
 */

int unknown_op_failure(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * malloc_failure- Prints malloc error texts
 * Return: EXIT_FAILURE.
 */

int malloc_failure(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * push_int_failure - Prints invalid push argument error text.
 * @line_number: Line no in Monty bytecodes file where error happened.
 * Return: EXIT_FAILURE
 */

int push_int_failure(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
