#include <stdio.h>

int main()
{
	int n,i,j,k;
	printf("Enter the no :");
	scanf("%d",&n);

	for (i = 0; i < n; i++) {
		for (int j = 0; j < 2 * i; j++) {
			printf(" ");
		}
		for (int k = 0; k <n-i; k++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}