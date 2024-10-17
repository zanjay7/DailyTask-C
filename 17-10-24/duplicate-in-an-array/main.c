
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int looked[n]; 
    for (int i = 0; i < n; i++) {
        looked[i] = 0;
    }

    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < n; i++) {
        if (looked[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    looked[j] = 1;
                }
            }
            if (count > 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
