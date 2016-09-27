#include <stdio.h>

int main()
{
	FILE *fpointer;
	int a, b, sum = 0;
	char buff[20];

	fpointer = fopen("ex.in", "r");

	fscanf(fpointer, "%d", &a);
	while (a != 0)
	{
		fscanf(fpointer, "%d", &b);
		sum += b;
		a--;
	}

	fpointer = fopen ("ex.out", "w");
	fprintf(fpointer, "%d", sum);
}
