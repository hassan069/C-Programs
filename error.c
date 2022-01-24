#include<stdio.h>
void FindMin(int array[],int min,int *a);
int main()
{
    int array[10];
    int min;
    int *a;
//int result;
    printf("Enter the values of array");
    scanf("%d",&array[0]);
    min=array[0];

    FindMin(array,min,&a);
    printf("Minimum number is %d",a);

    return 0;
}
void FindMin(int array[],int min,int *a)
{
    int c;
    for(int j=1;j<5;j++){
        scanf("%d",&array[j]);
        if(min>array[j])
            c=array[j];
            *a=c;
    }
    //return min;
}
