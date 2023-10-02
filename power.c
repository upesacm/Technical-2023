//POWER IN C
#include<stdio.h>
double power(double base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    else if(exponent > 0) {
        return base * power(base, exponent - 1);
    }
}
int main() {
    double base;
    int exponent;
    printf("Enter base, exponent: ");
    scanf("%lf %d", &base, &exponent);
    if(exponent >= 0) {
        double result = power(base, exponent);
        printf("Result: %.1lf", result);
    }
    else {
        printf("Exponent has to be greater than 0");
    }
    return 0;
}
