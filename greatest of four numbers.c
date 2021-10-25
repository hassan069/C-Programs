#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a>b)&&(a>c)&&(a>d)){
        printf("%d is big",a);
    }
    else if((b>c)&&(b>d)&&(b>a)){
        printf("%d is big",b);
    }
    else if((c>b)&&(c>a)&&(c>d)){
        printf("%d is big",c);
    }
    else{
        printf("%d is big",d);
    }
    return 0;
}
