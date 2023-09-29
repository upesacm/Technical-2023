#include <stdio.h>
int main(){
    int i,j,n,temp;
    printf("enter number of terms:");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (x[j]>x[j+1]){
                //swap x[j] to x[j+1]
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("sorted\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }

}