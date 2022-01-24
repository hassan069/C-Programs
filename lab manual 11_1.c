#include<stdio.h>
int main()
{
    int array[10];
    int array1[10];
    int array2[20];
    int k,i;

    printf("Enter the values of array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
        array2[i]=array[i];
    }
       k=i;
    printf("Enter the values of array1:\n");
    for(i=0;i<10;i++){
        scanf("%d",&array1[i]);
        array2[k]=array1[i];
        k++;
    }
    printf("After merging array will be:\n");
    for(i=0;i<k;i++){
            printf("%d",array2[i]);
        }

    return 0;
}
