#include <stdio.h>
#include <string.h>
void palindrome(char str[],int len)
{
    int p=1;
    for(int i=0;i<len;i++)
    {
        if(str[i] == str[len-1-i])
        {
            p=0;
        }
        else
        {
            p=1;
            break;
        }
    }
    if (p == 1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}
int main()
{
    char str[1000];
    int len=0;
    printf("Enter String :\n");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    palindrome(str,len);
    return 0;
}