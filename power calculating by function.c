#include<stdio.h>
void divisor(int m,int n);
int main()
{
    int m;
    int n;
    printf("Enter the value of m");
    scanf("%d",&m);
     printf("Enter the value of n");
    scanf("%d",&n);

    divisor(m,n);
    //printf("%d",result);

    return 0;
}
void divisor(int m,int n)
{
    int min;
    if(m>n)
        min=m;
    else
        min=n;
    for(int i=2;i<=min;i++){
        if(m%i==0 && n%i==0)
            printf("%d\n",i);
    }

}
