#include <stdio.h>

int main() {
    int n, sum = 0, i = 0;

    printf("Enter a natural number: ");
    scanf("%d", &n);
    
    do {
        sum += i; 
        i++;
    } while (i <= n);

    printf("The sum of the given natural numbers is: %d\n",sum);

    return 0;
}

