// Implement a function to determine if a given string is a palindrome.

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int i,j;
    for(i = 0;str[i] != '\0';i++);
    for(j = 0;j<i/2;j++)
    {
        if(str[j] != str[i-j-1])
        {
            printf("This is not a palindrome.\n");
            break;
        }
        else
        {
            printf("This is a palindrome.\n");
            break;
        }

    }
}