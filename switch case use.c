#include<stdio.h>
int main()
{
    char op; //operator
    int a;
    int b;

      printf("Enter the arithmetic operation");
    scanf("%c",&op);

    printf("Enter the value of a");
    scanf("%d",&a);

    printf("Enter the value of b");
    scanf("%d",&b);

    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d =%d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d + %d = %d",a,b,a/b);
            break;
    }


    return 0;
}
