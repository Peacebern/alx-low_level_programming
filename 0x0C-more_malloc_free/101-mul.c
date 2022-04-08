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
	char cn[6];
	char ch = 'E';
	int i;

	if (argc != 3)
	{
		_putchar(ch);
		
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1);
		printf("%d\n", num2);


		mul = num1 * num2;
		
		sprintf(cn, "%d", mul);
	
		for (i = 0; i < 3; i++)
		{

		

		_putchar(cn[i]);
		}



		return (0);
	}
}

