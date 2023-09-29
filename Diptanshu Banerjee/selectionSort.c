#include <stdio.h>

void selectionSort(int *arr, int length);

int main() {
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the values of the array: \n");
    for(int i = 0; i <= n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int length = sizeof(arr)/sizeof(int);

    selectionSort(arr, length);

    for(int i = 0; i<=n-1; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}

void selectionSort(int *arr, int length) {
    for(int i = 0; i<=length-2; i++) {
        int min = i;
        int j;
        for(j = i+1; j <= length-1; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
} 