#include <stdio.h>
void sort(int a[],int size)
{
    int temp;
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
}
void print(int a[],int size)
{
    printf("Sorting Completed !\n");
    printf("New List Looks Like This :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int length;
    printf("Enter Size of array :\n");
    scanf("%d",&length);
    int a[length];
    printf("Enter %d numbers :\n",length);
    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,length);
    printf("\n");
    print(a,length);
    printf("\n");
    return 0;
}