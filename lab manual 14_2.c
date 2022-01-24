#include<stdio.h>
#include<string.h>
int palindrome(char *str);
int main()
{
    char str[100];
    int result;

    printf("Enter the string:\n");
    gets(str);

    result=palindrome(str);
    if(result==1)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
}
int palindrome(char *str)
{
    int flag=1;
    int a=strlen(str);
    for(int i=0,j=a-1;i<a/2;i++,j--){
        if(*(str+i)!=*(str+j))
           flag=0;
        break;
    }
    return flag;
}
