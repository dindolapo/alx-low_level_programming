#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: function arg
 * @argv: function arg
 * Return: Always 0 for success
 */
int main(int argc, char **argv)
{
	int i;
	char *storage;

	storage = argv[0];
	for (i = 0; storage[i] != '\0'; i++)
		_putchar(storage[i]);

	_putchar('\n');
	return (0);
}
