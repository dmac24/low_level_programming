#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int money[5] = {25, 10, 5, 2, 1};
	int cents, i = 0, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (; i < 5; i++)
		{
			if (cents / money[i] > 0)
			{
				c += cents / money[i];
				cents = cents % money[i];
			}
		}
		printf("%d\n", c);
	}
	return (0);
}
