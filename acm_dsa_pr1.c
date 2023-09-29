#include<stdio.h>
int main(){char a;
    do{
        printf("number of elements to be added in an array-->");
        int num;
        int num1;
        scanf("%d",&num);
        int arr1[num],inp,elem;
        //printf("%d",num);
        
        for (int i=0;i<num;i++)
        {
            printf("enter the element %d--->",i+1);
            scanf("%d",&num1);
            arr1[i]=num1;
            //printf("%d",arr1[i]);
        }
        printf("1:find index of element using binary search:\n2:find the index of element using linear search\n3:exit\nenter your choice-->");
        scanf("%d",&inp);
        

        if (inp==1)
        {
        printf("enter the element to find its index-->");
        scanf("%d",&elem);
            for (int j=0;j<num;j++)
            {
                for (int k=j+1;k<num;k++)
                {
                    if(arr1[j]>arr1[k])
                    {
                        int temp=arr1[j];
                        arr1[j]=arr1[k];
                        arr1[k]=temp;
                    }
                }
            }
            int low=0,high=num-1,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(arr1[mid]==elem)
                {
                    printf("the binary index of %d is %d",elem,mid);
                    break;
                }
                else if(arr1[mid]>elem)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            /*for(int m=0;m<num;m++)
            {
                printf("%d",arr1[m]);
            }*/
        }
        else if(inp==2)
        {
        printf("enter the element to find its index-->");
        scanf("%d",&elem);
            for (int i=0;i<num;i++)
            {
                if (arr1[i]==elem)
                {
                    printf("the index of given element %d is %d\n",elem,i);
                    break;
                }
            }
        }
        else if (inp==3){break;}
        printf("\nenter y to run the code  again-->");
        scanf(" %c",&a);
    }while(a=='y');
    return 0;
}