#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is a main function
 *
 * Description: print the first 3 lines of the pascal's triangle
 * section header: Section description
 * Return: Olways 0, otherwise a error
 */

int main(void)
{
	int i, j;
	int **pnumbers;

	pnumbers = (int **) malloc(3 * sizeof(int));

	for (i = 0, j = 1; j <= 3; i++, j++)
		pnumbers[i] = (int *) malloc(j * sizeof(int));

	pnumbers[0][0] = 1;
	pnumbers[1][0] = 1;
	pnumbers[1][1] = 1;
	pnumbers[2][0] = 1;
	pnumbers[2][1] = 2;
	pnumbers[2][2] = 1;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d", pnumbers[i][j]);
		putchar('\n');
	}
	for (i = 0; i < 3; i++)
		free(pnumbers[i]);
	free(pnumbers);
	return (0);
}
