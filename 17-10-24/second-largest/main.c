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

    int largest =0;
    for (int i = 0; i < n; i++) {
        if (num[i] > largest) {
            largest = num[i];
            // printf("%d ",largest);
        }
    }
    int second_largest = 0;
    for(int i=0; i<n;i++){
        if(num[i]<largest && (second_largest == 0 ||num[i]>second_largest)){
            second_largest=num[i];
        }
    }
    if (second_largest != 0) {
        printf("Second largest number in array: %d", second_largest);
    }

}