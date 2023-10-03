#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    //bubble sorting
    int i, j,temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (array[j] > array[j + 1])
            {
                temp=array[j];
                array[j]=array[j + 1];
                array[j+1]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    
}
