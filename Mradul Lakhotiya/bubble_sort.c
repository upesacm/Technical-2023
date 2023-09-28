#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int n, int arr[]) {
    int i=0;
    if (n<=1) {
        return;
    }
    //sort 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort (n-1,arr);
}

int main () {
    int n; //input the array
    printf ("Enter the number Elements : ");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0; i<n; i++) {
        printf ("Enter the arr[%d] : ",i);
        scanf ("%d",&arr[i]);
    }
    
    bubble_sort (n , arr);

    printf ("The sorted array is : ");
    for (int i=0; i<n; i++) {
        printf ("%d\n",arr[i]);
    }
}