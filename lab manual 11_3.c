#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);

    int array1[size];
    int array2[size];

    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array1[i]);
      }
    for(int i=0,j=size-1;i<5;i++,j--){
        array2[j]=array1[i];
     }

    printf("Array in reverse order:\n");
    for(int j=0;j<size;j++){
        printf("%d",array2[j]);
    }
}
