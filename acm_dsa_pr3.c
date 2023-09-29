#include<stdio.h>

void pla_t(int,int);
void pali(int);
void main()

{
    int d;
    printf("Enter a number to check whether the number is palidrome or not--->");
    scanf("%d",&d);
    pali(d);}

void pali(int d){
    int xx,xy=0;
    xx=d;
    while(d>0)
    {
        xy=(xy*10)+(d%10);
        d=d/10;}
        pla_t(xx,xy);
    
    
}
void pla_t(int x,int y)
{
    if (x==y){
        printf("the given number %d is a palidrome number.\n",x);
    }
    else{
        printf("the given number %d is not a palidrome number.\n",x);
    }
}