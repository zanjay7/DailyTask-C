#include <stdio.h>
#include <string.h>

int main() {
    char a[20],temp;
    int length, i;
    printf("Enter the string: ");
    gets(a);

  
    length=strlen(a);

    
    for (i = 0;i<length/2;i++){
 
        temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
    }
    printf("Reversed string is: %s",a);

    return 0;
}
