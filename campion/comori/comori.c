#include <stdio.h>

int main()
{
	FILE *fpointer;
	int x, y, count, secondx = 0, secondy = 0;
	fpointer = fopen("comori.in", "r");
	
	fscanf(fpointer,"%d", &count);
	while (count != 0)
	{
		fscanf(fpointer,"%d %d", &x, &y);
		count--;

		if (x == 1)
		{
			secondy += y;
		}
		if (x == 2)
		{
			secondy += y;
			secondx += y;
		}
		if (x == 3)
		{
			secondx += y;
		}
		if (x == 4)
		{
			secondx += y;
			secondy -= y;
		}
		if (x == 5)
		{
			secondy -= y;
		}
		if (x == 6)
		{
			secondy -= y;
			secondx -= y;
		}
		if (x == 7)
		{
			secondx -= y;
		}
		if (x == 8)
		{
			secondx -= y;
			secondy += y;
		}
	}
	fclose(fpointer);
	fpointer = fopen("comori.out", "w");
	fprintf(fpointer, "%d %d", secondx, secondy);
	fclose(fpointer);
	return 0;
}

