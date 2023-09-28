#include <stdio.h>

int binarySearch(int arr[], int n);

int main() {
    int x;

    printf("Enter the size of the array: \n");
    scanf("%d", &x);

    int arr[x];

    printf("Enter the values in the array: \n");

    for(int i = 0; i<x; i++) {
        scanf("%d", &arr[i]);
    }

    int n;
    printf("Enter the number to find\n");
    scanf("%d", &n);

    int result =  binarySearch(arr, n);
    
    if(result == -1) {
        printf("%d is not in the array\n", n);
    } else {
        printf("%d is at position %d in the array\n", n, result);
    }
    return 0;
}

int binarySearch(int arr[], int n) {
    int start = 0;
    int end = sizeof(arr)-1;
    int mid = (end+start)/2;

    while(start <= end) {
        if(arr[mid] == n) {
            return mid;
        } else if(arr[mid] > n) {
            end = mid;
            mid = ((end+start)/2)-1;
        } else if(arr[mid] < n) {
            start = mid;
            mid = ((end + start)/2)+1;
        }
    }
    return -1;
}