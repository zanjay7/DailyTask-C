
#include <stdio.h>
#include <string.h>
int main()
{
    char strg[30];
    int length;
    printf("Enter the String: ");
    fgets(strg,sizeof(strg),stdin);
    // length=sizeof(strg[])/sizeof(strg[0]);
    length=strlen(strg)- 1;
    printf("The Lenght of  is: %d",length);

    return 0;
}