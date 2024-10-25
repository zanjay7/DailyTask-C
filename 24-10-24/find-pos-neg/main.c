
#include <stdio.h>
int positive(int arr[], int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			count++;
		}
	}
	return count;
}

int negative(int arr[], int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d",&n);

	int arr[n];
	int i;
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

	}



	printf("Number of positive integers: %d\n",positive(arr,n));
	printf("Number of negative integers: %d",negative(arr,n));


	return 0;
}
