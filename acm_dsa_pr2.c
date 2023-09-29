#include<stdio.h>
int fib(int);
void main()
{
    int a;
    printf("enter the number to find the nth fibonacci number-->");
    scanf("%d",&a);
    int result=fib(a);
    printf("the element of fibonacci series is %d",result);

}
int fib(int y)
{
    static int p=1;
    static int sum=0;
    if(y==1)
    {return sum;}
    else{
        y--;
        
        sum=sum+p;
        p=sum-p;
        fib(y);
    }
}