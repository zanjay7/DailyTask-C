
#include <stdio.h>

int main()
{
    int num,temp;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num<=0){
        temp=-num;
        printf("Absolute Value of %d is:%d",num,temp);
    }
    else{
        printf("Enter a valid number");
    }

    return 0;
}
