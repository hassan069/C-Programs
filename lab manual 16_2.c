#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    FILE *fptr=fopen("file1.txt","r");
    FILE *fptr1=fopen("file2.txt","w");
    int n;
    printf("How many characters to append");
    scanf("%d",&n);

    while(!feof(fptr)){
        fgets(str,n,fptr);
        fputs(str,fptr1);
    }
}
