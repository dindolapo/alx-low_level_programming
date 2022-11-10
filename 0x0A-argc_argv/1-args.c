#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 for success
 */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);

	return (0);
}
