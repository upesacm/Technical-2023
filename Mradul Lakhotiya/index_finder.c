#include <stdio.h>

int finder (int n, int arr[], int find, int low) {
    int high, mid;
    high = n-1;
    mid = (low+high)/2;
    if (find == arr[mid]) {
        return mid;
    } else if (find > arr[mid]) {
        low = mid + 1;
        finder (n,arr,find,low);
    } else {
        finder (mid,arr,find,low);
    }
}

int main () {
    int n, find, low=0;

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

    printf ("Enter the elemeten to be found : ");
    scanf ("%d",&find);

    int mid = finder (n,arr,find,low);

    printf ("The index of the Given number is : %d",mid);
}
