#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    
}

int main() {
    int base,exponent,result;
    printf("enter the base value-->");
    scanf("%d",&base);
    printf("enter the value of exponential power-->");
    scanf("%d",&exponent);
    result = power(base, exponent);
    
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}