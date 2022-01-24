#include<stdio.h>
int agggre(int array[]);
int main()
{
    int array[10];
    int sum;

    for(int i=0;i<5;i++)
    {
        printf("Enter value of element %d : ",i+1);
        scanf("%d", &array[i]);
        if(array[i]>100)
            continue;
    }
    float result=aggre(array);
    printf("The aggregate is %f",result);
    float b=(result/500)*100;
    printf("The percentage is %f",b);

    return 0;
}
int aggre(int array[])
{
    int sum=0,a;
    for(int i=0; i<5;i++){
        sum+=array[i];
        a=sum;
    }
    return a;
}
