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
	int num1;
	int num2;

	(void)argc;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	if (argv == NULL)
	{
		printf("Error");

		return (1);
	}
	else
		return (0);
}
