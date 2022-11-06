#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0 for success
 */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);

	return (0);
}
