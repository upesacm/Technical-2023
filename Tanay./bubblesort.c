#include<stdio.h>
void main()
{
    int array[10]={96,79,88,155,100,87,99,8,69};   
    int i, j,temp;
    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9 - i - 1; j++) 
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
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t",array[i]);
    }
    
}
