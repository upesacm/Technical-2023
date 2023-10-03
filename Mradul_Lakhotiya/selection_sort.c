#include <stdio.h>

int main () {
    int n;
    printf ("Enter the number Elements : ");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        printf ("Enter the arr[%d] : ",i);
        scanf ("%d",&arr[i]);
    }

    for (int i=0; i<n; i++) {
        int minindex=i;
        for (int j= i+1; j<n; j++) {
            if (arr[j]<arr[minindex]) {
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    printf ("The sorted array is : \n");
    for (int i=0; i<n; i++) {
        printf ("%d\n",arr[i]);
    }
    return 0;
}