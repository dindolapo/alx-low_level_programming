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
	int i;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
