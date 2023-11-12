#include <stdio.h>
int main(){
    int i,n,k,a=0;
    printf("enter no of terms in array:");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){              //taking input in the array
        scanf("%d",&x[i]);
    }
    printf("enter no to be searched:");  //taking the no to be searched
    scanf("%d",&k);
    for(i=0;i<n;i++){               //searching the number taken above
        if(k==x[i]){
            a=i;
            break;
        }
    }
    if(a==0){                          //a is taken because not found was printing repeatetively
       printf("not found");             
    }
    else{
        printf("found at index %d",a);
    }

}