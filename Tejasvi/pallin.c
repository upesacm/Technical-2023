#include <stdio.h>
int main(){
    int n,r,c;
    int sum=0;
    printf("enter no n:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==c){
        printf("yes");
    }
    else{
        printf("no");
    }
}