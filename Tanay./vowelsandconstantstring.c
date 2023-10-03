#include <stdio.h>
int main()
{
	char str[1000];
    printf("Enter a word:\n");
    scanf(" %s",&str);
	printf("String: %s", str);
    int vowels = 0, consonants = 0;
	int i;
	char ch;
	for (i = 0; str[i] != '\0'; i++)
    {
		ch = str[i];
		if (ch == 'a' || ch == 'e'
			|| ch == 'i' || ch == 'o'
			|| ch == 'u' || ch == 'A'
			|| ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U')
			vowels++;
		else if (ch == ' ')
			continue;
		else
			consonants++;
	}
	printf("\nVowels: %d", vowels);
	printf("\nConsonants: %d", consonants);
	return 0;
}
