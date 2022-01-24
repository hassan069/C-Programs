#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int a,i,count=0,b=0,c=0,d=0,e=0,f=0,g=0;

    gets(str);
    puts(str);

    a=strlen(str);

    for(i=0;i<a;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
        }
    printf("Total Characters %d\n",i);
    printf("Number of vowels in string are %d\n",count);

    for(i=0;i<a;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            b++;
        }
    printf("Number of consonants are %d\n",b);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a')
            c++;
        else if(str[i]=='e')
                d++;
        else if(str[i]=='i')
                e++;
        else if(str[i]=='o')
                f++;
        else if(str[i]=='u')
                g++;
        }
        printf("Total 'a' character in string are %d\n",c);
        printf("Total 'e' character in string are %d\n",d);
        printf("Total 'i' character in string are %d\n",e);
        printf("Total 'o' character in string are %d\n",f);
        printf("Total 'u' character in string are %d\n",g);

    return 0;
}
