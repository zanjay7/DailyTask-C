
#include <stdio.h>

int main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>=1){
        sum=(num*(num+1)/2);
        printf("The sum of %d Natural Numbers is: %d",num,sum);
    }
    

    return 0;
}
