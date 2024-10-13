
#include <stdio.h>

int main()
{
    int a,i,factorial=1;
    printf("Enter the Number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
       
    factorial*=i;
    }
    printf("factorial of the given number %d:%d",a,factorial);


    return 0;
}