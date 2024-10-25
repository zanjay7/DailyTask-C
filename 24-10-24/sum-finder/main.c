
#include <stdio.h>

int main()
{
	int n;

	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int sum;
	printf("Enter the sum: ");
	scanf("%d",&sum);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(arr[i]+arr[j]==sum) {
				printf("\nThe Elements are %d,%d",arr[i],arr[j]);
				break;
			}
		}
	}

	return 0;
}
