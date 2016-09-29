#include <stdio.h>
 
int main()
{
	FILE *fpointer;
	  int array[100], n, c, d, swap;

	  fpointer = fopen("rachete.in", "r");
	  fscanf(fpointer, "%d", &n);
	  		 
	  for (c = 0; c < n; c++)
		  fscanf(fpointer, "%d", &array[c]);
	  for (c = 0 ; c < ( n - 1 ); c++)
	  {
		  for (d = 0 ; d < n - c - 1; d++)
		  {
			  if (array[d] > array[d+1]) /* For decreasing order use < */
			  {
				  swap       = array[d];
				  array[d]   = array[d+1];
				  array[d+1] = swap;
			  }
		  }
	  }

	  fclose(fpointer);
	  fpointer = fopen("rachete.out", "w");
	  for ( c = 0 ; c < n ; c++ )
		  fprintf(fpointer, "%d ", array[c]);

	 return 0;
}
