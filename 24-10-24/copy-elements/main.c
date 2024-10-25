
#include <stdio.h>

int main()
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	int temp[20];
	printf("Enter the elements: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++) {
		temp[i] = arr[i];
	}
	printf("Original Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nNew Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", temp[i]);
	}

	return 0;
}
