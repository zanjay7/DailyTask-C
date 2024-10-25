
#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the elements: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int ele;
	printf("Enter the element to be deleted: ");
	scanf("%d",&ele);

	int count= 0;
	for(int i=0; i<n; i++) {
		if(arr[i]==ele) {
			count++;
			for (int j = i; j < n- 1; j++) {
				arr[i]= arr[j+ 1];
			}
			n--;
			printf("\nElement %d deleted from array\n", ele);
			printf("\nNew array: ");
			for(int i = 0; i < n; i++) {
				printf("%d ", arr[i]);
			}
		}

	}

	return 0;
}
