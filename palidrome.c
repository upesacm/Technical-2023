#include<stdio.h>
#include<string.h>
int palidrome(char *str, int start, int end) {
    if(start >= end) {
        return 1;
    }
    else if(str[start] == str[end]) {
        return palidrome(str, start + 1, end - 1);
    }
    else {
        return 0;
    }
}
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%d", str);
    int len = strlen(str);
    int result = palidrome(str, 0, len - 1);
    if(result == 1) {
        printf("String is palidrome.");
    }
    else {
        printf("String is not palidrome.");
    }
    return 0;
}

