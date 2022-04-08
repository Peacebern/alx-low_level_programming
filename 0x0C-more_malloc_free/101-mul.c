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
	char cn;
	char *ch[6] = {'E', 'r', 'r', 'o', 'r', '\0'};

	if (argc != 3)
	{
		_putchar(ch);
		
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d", num1);
		printf("%d", num2);


		mul = num1 * num2;

		cn = mul + '0';
		_putchar(cn);
		


		return (0);
	}

