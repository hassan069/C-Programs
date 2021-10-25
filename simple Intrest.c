
#include<stdio.h>

int main()
{
    int principal;
    int rate;
    int years;
    printf("Enter the value of principal\n");
    scanf("%d",&principal);
    printf("Enter the value of rate\n");
    scanf("%d",&rate);
    printf("Enter the value of years\n");
    scanf("%d",&years);
    int simpleIntrest=(principal*rate*years)/100;
    printf("The value of simpleIntrest is %d", simpleIntrest);

    return 0;
}
