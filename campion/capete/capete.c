#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[50];
	char b;
	int capete = 0;
	FILE *fpointer;
	fpointer = fopen("capete.in", "r");
	int input;

	while(!feof(fpointer))
	{
		fgets(c, 50, fpointer);
	}

	input = atoi(c);

	while (input != 0)
	{
		capete += 5;
		input--;	
	}

	b = capete + '0';
	
	fpointer = fopen("capete.out", "w");
	fprintf(fpointer,"%d", capete);
	
	return 0;

}
