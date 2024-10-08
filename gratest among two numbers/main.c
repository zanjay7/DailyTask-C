

#include <stdio.h>

int main()
{
	int a,b;

	printf("enter the two nos with a space :");
    scanf("%d %d",&a,&b);
	if(a>b) {
		printf("%d is the greatest no among %d %d",a,a,b);
	}
	else{
	    printf("%d is the greatest no among %d %d",b,a,b);
	    	
	}
	

	return 0;
}
