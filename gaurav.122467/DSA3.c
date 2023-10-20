#include <stdio.h>
void search(int a[],int size)
{
    int elem=0,f=0;
    printf("Enter element to be searched : \n");
    scanf("%d",&elem);
    for(int i=0;i<size;i++)
    {
        if(elem == a[i])
        {
            printf("Element Found !\n");
            printf("At index position : %d \n",i);
            f=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(f!=1)
    {
        printf("Element Not found.\n");
    }
}
int main()
{
    int len;
    printf("Enter Size of Array-: \n");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d numbers: \n",len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    search(a,len);
    return 0;
}