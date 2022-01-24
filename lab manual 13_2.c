#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    char array[10];
    int array_1[10];

    gets(str);

    for(int i=0;str[i]!='\0';i++)
        {
    if(str[i]=='a' || str[i]=='A')
        a++;
    else if(str[i]=='e' || str[i]=='E')
        b++;
    else if(str[i]=='i' || str[i]=='I')
        c++;
    else if(str[i]=='o' || str[i]=='O')
        d++;
    else if(str[i]=='u' || str[i]=='U')
        e++;
     if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            f++;
        else
            g++;
        }
    }
    array[0]='a',array[1]='e',array[2]='i',array[3]='o',array[4]='u';
    array_1[0]='a',array_1[1]='b',array_1[2]='c',array_1[3]='d',array_1[4]='e';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(array_1[j]>array_1[j+1])
                array_1[j+1]=array_1[j];
        }
    }
    printf("i is %d")
    printf("Vowels are %d\n",f);
    printf("consonants are %d",g);
}
