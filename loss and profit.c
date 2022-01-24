#include<stdio.h>
int main()
{
    int a;  //   a is cost price
    int b;  //   b is selling price
    int profit;
    int loss;


    printf("Enter the value of a\n ");
    scanf("%d",&a);

    printf("Enter the value of b\n ");
    scanf("%d",&b);

    if(b>a)
        printf("The profit is Rs.%d",b-a);

    else if(a>b)
        printf("The loss is Rs.%d",a-b);

    else if(a=b)
        printf("There is no loss or no profit");


    return 0;
}
