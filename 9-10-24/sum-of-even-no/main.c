
#include <stdio.h>

int main()
{
    int i=0,sum=0;
	  while ( i <= 50) {
        if (i % 2 == 0) {
            
           sum+=i ;
        }
       
        i++;
    }
    printf("The sum of even numbers between 1 and 50 is: %d\n", sum);
	return 0;
}
