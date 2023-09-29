#include<stdio.h>
int main()
{
    char ent[20];
    printf("enter the string-->");
    scanf("%s",&ent);
    int y=0;
    for(int i=0;ent[i]!='\0';i++)
    {
        y++;
    }
    //printf("%d",y);
    int con1=0,vov1=0;
    for(int j=0;j<y;j++){
        (ent[j]=='a' || ent[j]=='e' || ent[j]=='i' || ent[j]=='o' || ent[j]=='u' || ent[j]=='A' || ent[j]=='E' || ent[j]=='I' || ent[j]=='O'  || ent[j]=='U' ? vov1++ : con1++);
        
    }
    printf("total number of vovel in the string is %d\n",vov1);
    printf("total number of consonant in the string is %d",con1);
}