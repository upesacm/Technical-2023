#include <stdio.h>
void sort(int a[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void print(int a[],int size)
{
    printf("Sorted Array is-: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int len;
    printf("Enter Length of the array :\n");
    scanf("%d",&len);
    int a[len];
    printf("Enter elements of the array :\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,len);
    print(a,len);
    return 0;
}