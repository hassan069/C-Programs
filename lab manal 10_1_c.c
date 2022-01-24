#include<stdio.h>
int FindMin(int array[],int min);
int main()
{
    int array[10];
    int min;
int result;
    printf("Enter the values of array");
    scanf("%d",&array[0]);
    min=array[0];

    result=FindMin(array,min);
    printf("Minimum number is %d",result);

    return 0;
}
int FindMin(int array[],int min)
{
    for(int j=1;j<5;j++){
        scanf("%d",&array[j]);
        if(min>array[j])
            min=array[j];
    }
    return min;
}
