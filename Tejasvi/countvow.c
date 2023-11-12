#include <stdio.h>
int main(){
    int i,n;
    int countvow,countcons;
    printf("no of letters in the word:\n");
    scanf("%d",&n);
    char x[n];
    printf("enter your word:");
    //gets(x);
    scanf("%s",&x);
    for(i=0;i<n;i++){
        if(x[i]=='a'|| x[i]== 'e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
            countvow++;
        }
        else{
            countcons++;
        }
    }
    printf("no of vowels:%d\n",countvow);
    printf("no of consonants:%d",countcons);
}