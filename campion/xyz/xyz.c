#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z, secondx = 0;
	FILE *fpointer;

	fpointer = fopen("xyz.in", "r");
	(void)	fscanf(fpointer, "%d %d %d", &x, &y, &z);
	fclose(fpointer);

	fpointer = fopen("xyz.out", "w");

	while (x != 1)
	{
		if (secondx == 0)
		{
			fprintf(fpointer, "%d", y);
		}
		fprintf(fpointer, "%d", z);
		x--;
		secondx++;
	}
	fclose(fpointer);

	return 0;

}
