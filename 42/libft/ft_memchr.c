#include <stdio.h>
#include <string.h>

int main(void)
{
	  char *p;

	    p = memchr("строка из примера", 'a', 5);
	      puts(p);

	        return 0;
} 

