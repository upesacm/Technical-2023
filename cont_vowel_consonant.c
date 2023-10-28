//number of vowel and consonant
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_vowel(char c) {
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}
void count(char *str, int *vowel, int *consonant) {
    *vowel = 0;
    *consonant = 0;
    for(int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if(isalpha(c)) {
            if(is_vowel(c)) {
                (*vowel)++;
            }
            else {
                (*consonant)++;
            }
        }
    }
}
int main() {
    char str[100];
    printf("Enter string in lowercase: ");
    scanf("%s", str);
    int vowel, consonant;
    count(str, &vowel, &consonant);
    printf("Vowel: %d\n", vowel);
    printf("Consonant: %d\n", consonant);
    return 0;
}