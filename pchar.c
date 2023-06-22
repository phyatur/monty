#include "monty.h"

/**
 * pchar - will print the int at the top of the stack as char
 * @stack: the stack given by the main
 * @line_cnt: amount of lines
 *
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}

