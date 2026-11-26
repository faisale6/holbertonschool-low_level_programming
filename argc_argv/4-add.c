#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive  command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '\0')
		{
			printf("Error\n");
			return (1);
		}
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
