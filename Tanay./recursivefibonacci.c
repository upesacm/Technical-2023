#include<stdio.h>
int fib(int);
int main()
{
	int n;
    printf("Enter the nth term fibonacci term that you require:\n");
	scanf("%d",&n);
	printf("The %d term in the fibonacci series is: %d ",n,fib(n));
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1||n==2)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
