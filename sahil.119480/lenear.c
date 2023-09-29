// Implement a linear search algorithm to find the index of a given element in an array.

#include<stdio.h>

int main()
{
    int ask,i,j,temp,s;
    printf("Enter the number of elements : ");
    scanf("%i",&ask);
    int a[ask],in[ask];
    for(i = 0;i<ask;i++)
    {
        in[i] = i;
        printf("Enter %i num : ",i+1);
        scanf("%i",&a[i]);
    }   
    printf("Enter what you want to search : ");
    scanf("%i",&s);
    
    for(i = 0;i<ask;i++)
    {
        if(s == a[i])
        {
            printf("The index of %i is %i \n",s,in[i]);
            break;
        }
    }
    if(i == ask)
    {
        printf("This is not in the list.\n");
    }    
}