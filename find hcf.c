#include<stdio.h>
int HCF(int a,int b);
int main()
{
    int a;
    int b;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);

    int result=HCF(a,b);
    printf("%d",result);

    return 0;
}
int HCF(int a,int b)
{
    int h;
    for(int i=1;i<b;i++){
        if(a%i==0 && b%i==0)
            h=i;
    }
    return h;
}
