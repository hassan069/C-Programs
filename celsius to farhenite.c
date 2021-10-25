#include<stdio.h>

int main()
{
    float celsius;

    printf("Enter the value of celsius");
    scanf("%f",&celsius);

    float farhenite=(celsius*9/5)+32;

    printf("The temperature from celsius to farhenite is %f",farhenite);


    return 0;
}
