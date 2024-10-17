#include <stdio.h>

int main() {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int num[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int largest;
	int smallest;
	for (int i = 0; i < n; i++) {
		if (num[i] > largest) {
			largest = num[i];
			// printf("%d ",largest);
		}
		if (num[i] < smallest) {
			smallest = num[i];
		}
	}
	printf("Largest number in array: %d\n", largest);
	printf("Smallest number in array: %d\n", smallest);


}