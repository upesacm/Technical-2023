//print the index number of a element in an array by binary searching.
#include <stdio.h>
void sort(int a[],int size)
{
    int temp,j;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
    }
    printf("Sorting Done !\n");
    printf("New List Looks Like This :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
void search(int a[],int size)
{
    int found=1;
    while(found==1)
    {
        int elem=0,ll=0,hl=size-1,x=0;
        printf("Enter element to be searched-: \n");
        scanf("%d",&elem);
        while(ll<=hl)
        {
            if(a[(hl+ll)/2] == elem)
            {
                printf("Element found in the list! \n");
                found=-1;
                x=((hl+ll)/2);
                printf("At index position : %d \n",x);
                break;
            }
            else if(a[(hl+ll)/2] < elem)
            {
                ll=((hl+ll)/2)+1;
            }
            else if(a[(hl+ll)/2] > elem)
            {
                hl=((hl+ll)/2)-1;
            }
        }
        if(found == 1)
        {
            printf("Element not found");
            break;
        }
    }
}
int main()
{
    int len;
    printf("Enter the length of array-: \n");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d numbers-: \n",len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    sort(a,len);
    printf("\n");
    search(a,len);
    printf("\n");
    return 0;
}