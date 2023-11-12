#include <stdio.h>
#include <string.h>

int main () {
    int count=0;
    char str[100];
    printf ("Enter the string : ");
    scanf ("%s",&str);

    int n=strlen(str);

    for (int i=0; i<n; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
        }
    }
    printf ("The Number of vovales in thr given sting are %d",count);

    return 0;
}