// Implement a binary search algorithm to find the index of a given element in a sorted array.
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
    //          Selection sort 
    for(i = 0;i<ask;i++)
    {

        for(j = i+1;j<ask;j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];

                in[i] = in[i] + in[j];
                in[j] = in[i] - in[j];
                in[i] = in[i] - in[j];
            }
        }

    }
    printf("Enter what you want to search : ");
    scanf("%i",&s);
    
    int l = 0,h = ask-1,m;
    
    while(l <= h)
    {
        m = (l + h)/2;
        if(s == a[m])
        {
            printf("The index of %i is %i \n",s,in[m]);
            break;
        }
        else if(s > a[m])
        {
            l = m+1;
        }
        else
        {
            h = m-1;
        }
    }
    if(l>h)
    {
        printf("This is not in the list.\n");
    }
    
    return 0;
}