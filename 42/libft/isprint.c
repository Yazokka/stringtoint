#include <ctype.h>
#include <stdio.h>

int main(void)
{
	  char ch;

	    for(;;) {
		        ch = getchar();
			    if(isprint(ch)) printf("Символ %c является печатаемым\n",ch);
			        if(ch == '.') break;
				  }

	      return 0;
}

