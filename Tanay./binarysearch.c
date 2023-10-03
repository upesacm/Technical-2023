#include<stdio.h>
int main()
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
    int l=0,r=n-1,x;
    printf("Enter the element you want to search:\n");
    scanf("%d",&x);
     while (l <= r) 
     {
        int m = l + (r - l) / 2;
        if (array[m] == x)
        {
            printf("The index of the desired value is: %d",m);
            return 0;
        }
        if (array[m] < x)
            l = m + 1;
        else
            r = m - 1;
     }
     printf("Not found in the set of array");
}
