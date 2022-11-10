#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	int total, i, j;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[i]);
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
