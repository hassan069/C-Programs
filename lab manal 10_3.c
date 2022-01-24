#include<stdio.h>
int main()
{
    int marks[10];
    int sum=0;
    float c;

    printf("Enter the marks:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&marks[i]);
        if(marks[i]>100){
                continue;
        }
    sum=sum+marks[i];
    }
    c=(sum/1000.0)*100;
    printf("The aggregate is %d\n",sum);
    printf("The percentage is %f",c);
}
