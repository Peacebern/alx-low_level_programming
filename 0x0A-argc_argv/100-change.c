#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - finds least number of coins
 * @n: money amount
 * Return: number of coins
 */

int make_change(int n)
{
	int coins, quarters, dimes, nickels, twocents, pennies;

	coins = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	twocents = 0;
	pennies = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			quarters += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			dimes += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			nickels += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			twocents += 1;
		}
		else
		{
			n -= 1;
			pennies += 1;
		}
	}
	coins = quarters + dimes + nickels + twocents + pennies;

