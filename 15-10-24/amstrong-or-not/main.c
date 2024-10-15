#include <stdio.h>

int main()
{
    int Num,Num2,rem,result=0;
    printf("*PROGRAM TO FIND AMSTRONG NUMS*\n");
    printf("Enter the number: ");
    scanf("%d",&Num);
    Num2=Num;
   
    while (Num2!=0){
        rem=Num2%10;
        result=result+rem*rem*rem;
        Num2=Num2/10;
        
    }
    if(Num==result){
        printf("The Entered no is an Amstrong Num");
    }
    else{
        printf("The Entered no is not an Amstrong Num");
        
    }

    return 0;
}