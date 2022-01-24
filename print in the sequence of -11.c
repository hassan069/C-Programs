#include<stdio.h>
int main()
{
    int num;
    int i=1;

    while(i<=10){
        printf("Enter the numbers");
        scanf("%d",&num);

        if(num>0)
            printf("%d is positive\n",num);
        else if(num<0)
            printf("%d is negative\n",num);

        i++;
    }

    return 0;
}
