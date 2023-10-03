#include <stdio.h>
#include <string.h>
int stringd(char str[])
{
    int l = 0;
	int h = strlen(str) - 1;
	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}
	printf("%s is a palindrome\n", str);
}
int main()
{
	char str[1000];
    printf("Enter the string you wanna check palindrome for:\n");
    scanf("%s",&str);
    stringd(str);
	return 0;
}
