#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s); /* we put this after calling the function is because if we had put it before calling the function it would have printed the string but not in reverse */
	}
}
