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
	int i, j, k;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (k = 0; *(argv[i] + k) != '\0'; k++)
			{
				if (argv[i][k] >= '0' && argv[i][k] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
