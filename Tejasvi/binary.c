#include <stdio.h>
int main(){
    int i,n,k;
    int a=0;
    printf("enter no of terms in array:");
    scanf("%d",&n);
    int x[n];

    printf("enter the number in ascending order\n");
    for(i=0;i<n;i++){                       //taking input in array
        scanf("%d",&x[i]);
    }

    printf("your array is:");
    for(i=0;i<n;i++){                       //output in array
        printf("%d",x[i]);
    }
    
    printf("\n");

    int low=0;                              //binary search
    int high=n-1;
    int mid=(low+high)/2;
    printf("enter no. to be searched:");
    scanf("%d",&k);
    while(low<=high){
        if(x[mid]>k){
            high=mid-1;
            mid=(low+high)/2;
        }
        else if(x[mid]<k){
            low=mid+1;
            mid=(low+high)/2;
        }
        else if(x[mid]==k){
                printf("k is found at index %d",mid);
                a++;
                break;
        }
    }
    if(a==0){
        printf("number not found");
    }
}