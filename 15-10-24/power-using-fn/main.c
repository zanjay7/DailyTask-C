#include <stdio.h>

int powerCalcu(int base, int exponent){
	int result = 1;
	int i;
	for (i=0; i<exponent; i++) {

		result =result*base;
	}

	return result;
}

int main() {
	int base, exponent, result;

	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exponent);


	printf("The ans is:%d",result = powerCalcu(base, exponent));

	return 0;
}
