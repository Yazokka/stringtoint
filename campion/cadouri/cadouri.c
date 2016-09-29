#include <stdio.h>

int main()
{
	FILE *fpointer;
	int n, f, b, temp;

	fpointer = fopen("cadouri.in", "r");
	fscanf(fpointer, "%d %d %d" ,&f ,&b, &n);

	while (n != 0)
	{
		fscanf(fpointer, "%d", &temp);
		if (temp % 2 == 0)
		{
			f--;
		}
		if (temp % 2 != 0)
		{
			b--;
		}
		n--;
	}
	fclose(fpointer);

	if (b < 0)
	{
		b = 0;
	}
	if (f < 0)
	{
		f = 0;
	}
	
	fpointer = fopen("cadouri.out", "w");
	fprintf(fpointer, "%d\n%d", f ,b);
	fclose(fpointer);
}
