// Write a program in C to count the number of vowels and consonants in a string

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int i,j,c = 0,v = 0;
    for(i = 0;str[i] != '\0';i++);
    for(j = 0;j<i;j++)
    {
        if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("The number of vowels is %i and consonants is %i\n",v,c);
}