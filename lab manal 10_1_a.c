#include<stdio.h>
int main()
{
    int array[10]={0};
    int count=0;

    printf("Enter the values of array");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
        if(array[i]%2==0){
            count ++;
        }
    }

     printf("Total even numbers are %d",count);

     return 0;
}
