#include<stdio.h>
int main()
{
    int array[10]={0};
    int count=0;

    printf("Enter the values of array");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
        array[i]*=4;
        }
    for(int j=0;j<10;j++){
     printf("The values of array are: %d\n",array[j]);
     }

    return 0;
}
