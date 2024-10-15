#include <stdio.h>

void evenNumber(int inter1, int inter2) {
	for (int i = inter1; i <= inter2; i++) {

		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
}

int main() {
	int inter1,inter2;
	printf("Enter the interval 1: ");
	scanf("%d", &inter1);
	printf("Enter the interval 2: ");
	scanf("%d", &inter2);
	evenNumber(inter1,inter2);

	return 0;
}
