#include<stdio.h>
int main()
{
    int salary[5];
    int rate[5];
    int hours[5];

    for(int i=0;i<5;i++){

        printf("Enter the rate for %d employ",i+1);
        scanf("%d",&rate[i]);

        printf("Enter the hours for %d employ",i+1);
        scanf("%d",&hours[i]);

        salary[i]=rate[i]*hours[i];
        printf("The salary of %d employ is: %d\n\n",i+1,salary[i]);
    }

    return 0;
}
