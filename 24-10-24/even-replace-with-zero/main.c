
#include <stdio.h>

int main()
{
	int n;

	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array with space: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++) {
		if(arr[i]%2==0) {
			arr[i]=0;
		}
	}
	printf("New Array: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
