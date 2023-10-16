#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if ( n>5 )
		{
			printf("%dThe string is positive\n", n);
		}
		else if (n == 0 )
		{	
		      	printf("%dThe string is 0\n", n);
		}
		else ( n<6  );
		{
			printf("%dThe string is negative\n", n);
		}
		return (0);
}
