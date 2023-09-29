// Write a recursive function to generate the nth Fibonacci number.

#include<stdio.h>

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%i",&n);
    printf("The %i th Fibonacci number is %i\n",n,fib(n));
}