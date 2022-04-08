#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;
	char cn[10];
	char ch[7] = "Error\n";
	int i;
	int r;

	if (argc != 3)
	{
		for (r = 0; r < 7; r++)
		{
		_putchar(ch[r]);
		}
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		sprintf(cn, "%d", mul);
		for (i = 0; i < 3; i++)
		{
		_putchar(cn[i]);
		}
		_putchar('\n');

		return (0);
	}
}
