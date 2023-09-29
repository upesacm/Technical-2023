#include <stdio.h>

int linearSearch(int *arr, int length, int key);

int main() {
    int n;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the values of the array: \n");
    for(int i = 0; i <= n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the value to find: \n");
    scanf("%d", &key);

    int length = sizeof(arr)/sizeof(int);

    int result = linearSearch(arr, length, key);

    if(result == -1) {
        printf("%d is not in the array\n", key);
    } else {
        printf("%d is at position %d in the array\n", key, result);
    }

    return 0;
}

int linearSearch(int *arr, int length, int key) {
    for(int i = 0; i<= length-1; i++) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}