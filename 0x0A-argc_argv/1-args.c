#include <stdio.h>
/**
 * main - print number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv:pointer to an array of command line arguments.
 * Return: Always 0.
 */

int main(int argc, *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
