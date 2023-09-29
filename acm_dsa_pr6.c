#include<stdio.h>
int main()
{
    int y,z;
    printf("number of elements to be added in an array-->");
        int num,num1;
        scanf("%d",&num);
        int arr1[num],inp,elem,j;
        //printf("%d",num);
        inp=num;
        for (int i=0;i<num;i++)
        {
            printf("enter the element %d--->",i+1);
            scanf("%d",&num1);
            arr1[i]=num1;
            //printf("%d",arr1[i]);
        }
        
        for(int i=0;i<num;i++){inp--;
            for(y=0;y<inp;y++)
{
    if(arr1[y]>arr1[y+1])
    {
        elem=arr1[y];
        arr1[y]=arr1[y+1];
        arr1[y+1]=elem;
    }
}}
     for(int m=0;m<num;m++)
            {
                printf("%d\t",arr1[m]);
            }printf("\n");}
