#include<stdio.h>
#include<string.h>
void str_cat(char str1[],char str2[],int num);
int main()
{
    char str1[50];
    char str2[50];
    int num;

    printf("Enter the string 1:\n");
    gets(str1);

    printf("Enter the string 2:\n");
    gets(str2);

    printf("Enter the size to concatenate:\n");
    scanf("%d",&num);

    str_cat(str1,str2,num);

    puts(str1);
}
void str_cat(char str1[],char str2[],int num)
{
    int i=strlen(str1);
    if(strlen(str2)>=num){
        for(int j=0;j<num;j++){
                str1[i]=str2[j];
                i++;
        }
        str1[i]='\0';
    }
    else{
    for(int j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
  }
}
