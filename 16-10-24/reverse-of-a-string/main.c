#include <stdio.h>
#include<string.h>
void reverseString(char str[],char temp[]) {
	int i;
	int len = strlen(str) - 1;

	for(i=0; i<=len; i++) {
		temp[i]= str[len-i];

	}


}
int main()
{
	char str[20];
	char temp[20];
	int i;
	printf("*REVERSE OF A STRING*\n");
	printf("Enter The String: ");
	fgets(str,sizeof(str),stdin);

	str[strcspn(str, "\n")] = 0;
	reverseString(str, temp);
	printf("\nThe reverse of String is:%s",temp);
	
	return 0;
}