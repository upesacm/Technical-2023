#include <stdio.h>

void Fabonacci (int i, int j, int n) {
    if (n==0) {
        return;
    }
    printf ("%d\n",i);
    int temp;
    temp = i;
    i = j;
    j = j + temp;
    n--;

    Fabonacci (i,j,n);
}

int main () {
    int n;
    printf ("Enter the number till you want Fibonacci seres : ");
    scanf ("%d",&n);

    Fabonacci (0,1,n);

    return 0;
}