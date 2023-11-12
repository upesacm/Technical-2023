#include <stdio.h>
int fibo(int,int,int);
int fibo(int n,int a,int b){
    if(n==0){
        return a;
    }
    else if(n==1){
        return b;
    }
    else{
        return fibo(n-2,a,b)+fibo(n-1,a,b);
    }
}
int main(){
    int a,i,c,d;
    scanf("%d",&a);
    scanf("%d %d",&c,&d);
    for(i=0;i<a;i++){
        printf("%d ",fibo(i,c,d));
    }
}