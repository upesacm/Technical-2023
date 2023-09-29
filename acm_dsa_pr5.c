#include<stdio.h>
int main()
{
    printf("number of elements to be added in an array-->");
        int num,num1;
        scanf("%d",&num);
        int arr1[num],inp,elem,small,j;
        //printf("%d",num);
        
        for (int i=0;i<num;i++)
        {
            printf("enter the element %d--->",i+1);
            scanf("%d",&num1);
            arr1[i]=num1;
            //printf("%d",arr1[i]);
        }
        /*for(int m=0;m<num;m++)
            {
                printf("%d\t",arr1[m]);
            }*/
        for(int i=0;i<num-1;i++)
        {
            small=arr1[i];
            inp=arr1[i];
            for (j=i+1 ;j< num;j++ ){
                if (arr1[i]>arr1[j])
                {
                    small=arr1[j];
                    elem=j;
                    arr1[i]=small;
                    
                }
                else{
                    continue;
                }
            }
            //printf("%d",small);
            if (inp!=small){
            arr1[elem]=inp;}
            


        }
        for(int m=0;m<num;m++)
            {
                printf("%d\t",arr1[m]);
            }printf("\n");
        
}