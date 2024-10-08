
#include <stdio.h>

int main()
{
   float a,b,c;
   
    printf("Enter the principal amount, rate of interest, and time (in years) with defined spaces between them: ");
    
    scanf("%f%f%f",&a,&b,&c);
    printf("The calculated Simple intrest is: %f",a*b*c);
    return 0;
}
