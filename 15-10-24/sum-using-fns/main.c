
#include <stdio.h>

int sumOfdigits(int a) {
	int sum=0;
	int rem;
	while(a>0) {
		rem=(a%10);
		sum=sum+rem;
		a=a/10;
	}

	return sum;
}

int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("%d",sumOfdigits(a));
	return 0;
}