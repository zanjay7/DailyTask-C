
#include<stdio.h>
int main() {
	int arr[8];
	int seven,sodd;
	int i;
	printf("Enter the array with a space: ");
	for(int i=0; i<8; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<8; i++) {
		if(i % 2 == 0) {
			// seven=seven+arr[i];
			seven+=arr[i];
		}
		else {
			sodd+=arr[i];
		}
	}
	printf("Sum of elements at even indices: %d\n", seven);
	printf("Sum of elements at odd indices: %d\n", sodd);


}