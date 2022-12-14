#include "monty.h"

/**
 * count_stack - counts the number of elements in the stack
 * @stack: stack to count
 *
 * Return: number of elements in the stack
 */
unsigned int count_stack(stack_t *stack)
{
	stack_t *current = stack;
	unsigned int len = 0;

	while (current != NULL)
	{
		++len;
		current = current->next;
	}

	return (len);
}
