#include <stdio.h>

int main() {
	float num1, num2;
	char operation;


	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	printf("Choose an operation (+, -, *, /): ");
	scanf(" %c", &operation);

	switch(operation) {
	case '+':
		printf("%f+%f=%f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%f+%f=%f",num1,num2,num1-num2);
		break;
	case '/':
		printf("%f+%f=%f",num1,num2,num1/num2);
		break;
	case '*':
		printf("%f+%f=%f",num1,num2,num1*num2);
		break;

	}




	return 0;
}

