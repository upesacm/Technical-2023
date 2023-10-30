#include <stdio.h>
int fib(int c) 
{
    if(c == 0)
    {
        return 0;
    }
    else if(c == 1)
    {
        return 1;
    }
    else
    {
        return ( fib(c-1) + fib(c-2) );
    }   
}
int main()
{
    int c=0,l=0,lim=0;
    printf("Enter Limit till which you want to calculate fibonacci series :\n");    
    scanf("%d",&l);
    printf("\n");
    for(int i=1;i<=l;i++)
    {
        printf("%d\n",fib(c));
        c++;
    }    
    return 0;
}
/* 0 1 1 2 3 5 8 ....
   a b c
     a b c
       a b c */