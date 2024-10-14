#include <stdio.h>

int main()
{
    int n,j,k,i;
    printf("Enter the no :");
	scanf("%d",&n);

    for (i= 0; i <n; i++) {

        for (j = 0; j<i; j++) {
            printf(" ");
        }
        for (k = 0; k <n; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}