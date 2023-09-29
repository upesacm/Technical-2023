// Implement the bubble sort algorithm to sort an array of integers.

#include<stdio.h>

int main()
{
    int ask,i,j,temp;
    printf("Enter the number of elements : ");
    scanf("%i",&ask);
    int a[ask];
    for(i = 0;i<ask;i++)
    {
        printf("Enter %i num : ",i+1);
        scanf("%i",&a[i]);
    }
    for(i = 0;i<ask;i++)
    {
        for(j = 0;j<ask-i-1;j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1]; 
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted array is : ");
    for(i = 0;i<ask;i++)
    {
        printf("%i ",a[i]);
    }
    printf("\n");
}