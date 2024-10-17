#include <stdio.h>

int main() {
    int arr1[5],arr2[5],newarr[10];

    printf("Enter 5 elements for the first array with space:");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the 5 elements in second array with space:");
    for(int i=0 ; i< 5; i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<5;i++){
        newarr[i]=arr1[i];
        newarr[i + 5]=arr2[i];
        
    }
    printf("Merged array:");
    for (int i = 0; i < 10; i++) {
        printf("%d ", newarr[i]);
    }

    
    return 0;
}