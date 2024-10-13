#include <stdio.h>

int main()
{
    int a;
    
    printf("AGE GROUP RECOGNITION\n");
    
    printf("Enter the age of the person (1-100): ");
    scanf("%d",&a);
    if(a==0 , a<=12){
        printf("Child");
    }
    else if(a>=12 , a<=19){
            printf("Teenager");
    }
    else if(a>=20 , a<=64){
            printf("Adult");
            
    }
    else{
        printf("Senior");
    }
         
        
    return 0;
}