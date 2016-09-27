#include <stdio.h>

int main()
{
	int memory, count, sum = 0, loop = 0, temp;
	FILE *fpointer;
	fpointer = fopen("psp.in", "r");
	fscanf(fpointer, "%d %d", &count, &memory);

	while (count != 0)
	{
		fscanf(fpointer, "%d", &temp);
		if (temp < memory)
		{
			memory -= temp;
			loop++;
		}
		count--;
	}
	
	fpointer = fopen("psp.out", "w");
	fprintf(fpointer, "%d %d", loop, memory);

	return 0;
}
