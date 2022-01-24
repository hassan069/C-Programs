#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f1ptr=fopen("file1.txt","w");

    char str[20];
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        fputc(str[i],f1ptr);
    }


    return 0;
}
