#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf(" %s", str); 

    int n = strlen(str);
    char ostr[n + 1]; 

    strcpy(ostr, str);

    int i = 0, j = n - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    if (strcmp(ostr, str) == 0) {
        printf("%s is a palindrome.\n", ostr);
    } else {
        printf("%s is not a palindrome.\n", ostr);
    }

    return 0;
}
