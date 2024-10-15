
#include <stdio.h>

int main()
{
	int num,num2,rev=0,rem;
	printf("Enter the no:");
	scanf("%d",&num);
	num2=num;

	while(num2!=0) {
		rem=num2%10;
		rev=(rev*10)+rem;
		num2=num2/10;

	}
	if(num==rev) {
		printf("Entered num is  Palindrome");
	}
	else {
		printf("Entered num is not Palindrome");
	}

	return 0;
}
