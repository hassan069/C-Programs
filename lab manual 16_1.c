#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr=fopen("DATA.txt","w");

    char str1[20];
    gets(str1);

    for(int i=0;i<strlen(str1);i++){
        fputc(str1[i],fptr);
    }

    return 0;
}
