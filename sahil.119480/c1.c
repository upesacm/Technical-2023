// Implement a binary search algorithm to find the index of a given element in a sorted array.
#include<stdio.h>

int main()
{
    int ask,i,t,c=0;
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

        for(int j = 1;j<ask-i-1;i++)
        {
            if (a[0] > a[i])
            {
                t = a[i];
                a[i] = a[0];
                a[0] = t;
                c++;
            }
        }
        if (c == 0)
        {
            break;
        }
        c = 0;

    }
    for(i = 0;i<ask;i++)
    {
        printf("%i ",a[i]);
    }
    printf("\n");
    // int se;
    // printf("Enter the number you want to search : ");
    // scanf("%i",&se);

    // i = ask;
    // while(1)
    // {
    //     if(se >= a[i/2])
    //     {
    //         i = i/2;
    //         if(se == a[i])
    //         {
    //             printf("The location is %i of sorted array",i/2);
    //         }
    //         else if(se );
    //     }


    // }

}