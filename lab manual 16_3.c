#include<stdio.h>
int main()
{
    char ch;
    int count=0;

    FILE *fptr=fopen("file3.txt","r");
    ch=fgetc(fptr);

    while(ch!=EOF){
        if(ch=='@' || ch=='$' || ch=='*' || ch=='#'|| ch=='?'){
            count ++;

            ch=fgetc(fptr);
        }

    }
     printf("The keywords are %d times",count);



    return 0;
}
