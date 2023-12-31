#include "monty.h"

/**
 * pall - will print the stack
 * @stack: stack given by main function in start.c
 * @line_cnt: number of lines
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
