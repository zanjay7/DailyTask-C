
#include <stdio.h>

int main()
{
	int year;
	printf("PROGRAM TO FIND LEAP YEAR\n");
	printf("Enter a Year as YYYY: ");
	scanf("%d",&year);
	if(year%4==0) {
		printf("Its a Leap Year");
	}
	else {
		printf("It is not a Leap Year");
	}

	return 0;
}
