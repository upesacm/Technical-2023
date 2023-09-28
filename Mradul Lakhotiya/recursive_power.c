#include <stdio.h>

int powfinder(int num, int pow) {
    if (pow == 0) {
        return 1;
    } else {
        return num * powfinder(num, pow - 1);
    }
}

int main() {
    int num, pow;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);

    int result = powfinder(num, pow);

    printf("The Answer is: %d\n", result);

    return 0;
}
