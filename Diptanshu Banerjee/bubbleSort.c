#include <stdio.h>

void bubbleSort(int *arr, int length);

int main() {
    int n; 

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the values of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int length = sizeof(arr)/sizeof(int);

    bubbleSort(arr, length);

    for(int i = 0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}

void bubbleSort(int *arr, int length) {
    
    for(int i = 0; i <= length -2; i++) {
        for(int j = 0; j <= length-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}