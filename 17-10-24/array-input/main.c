#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter the Num of elements: ");
    scanf("%d",&num);
    int arr[num];
    int i;
    printf("Enter the elements: ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
    printf("%d",arr[i]);
    }
    
    return 0;
}
