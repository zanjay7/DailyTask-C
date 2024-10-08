
#include <stdio.h>

int main()
{
	float a,b,c;

	printf("Enter the 3 Numbers with specific space between them: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b && a>c) {
		printf("The greatest Number is: %f",a);
	}
	if(b>a && b>c) {
		printf("The greatest Number is: %f",b);
	}
	if(c>a && c>b) {
		printf("The greatest Number is: %f",c);
	}


	return 0;
}
