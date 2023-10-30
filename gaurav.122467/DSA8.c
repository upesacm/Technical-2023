#include <stdio.h>
void count(char str[],int len)
{
    int v=0,c=0;
    for(int i=0;i<=len;i++)
    {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
    }
    printf("No. of Vowels : %d\n",v);
    printf("No. of Consonents : %d\n",c);
}
int main()
{
    int len=0;
    char str[1000];
    printf("Enter string : \n");
    scanf("%s",str);
    for(int i=1;i<str[i]!='\0';i++)
    {
        len++;
    }
    count(str,len);
    return 0;
}