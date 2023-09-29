#include <stdio.h>

int main()
{
    int a,i,x=1,f,c=0;
    printf("Enter how many terms you want to see in the sequence ");
    scanf("%d",&a);
    printf("0,1");
    for(i=1;i<=(a-2);i++)
    {
        f=x+c;
        printf(",%d",f);
        c=x;
        x=f;
    }

    return 0;
}
