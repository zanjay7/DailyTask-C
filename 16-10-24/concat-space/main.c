#include <stdio.h>
#include <string.h>

int main() {
	char str[30];
	char result[30];
	int len, i;
	char temp[30];
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = 0;

	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] != ' ') {
			char temp[30]= {str[i], '\0'};
			strcat(result,temp);
		}
	}

	printf("String without spaces: %s", result);

	return 0;
}
