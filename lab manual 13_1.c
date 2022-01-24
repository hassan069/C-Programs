#include<stdio.h>
void swap_diagnol(int array[][10],int s1);
int main()
{
    int array[10][10];
    int s1;

    printf("Enter the size 1");
    scanf("%d",&s1);

    printf("Enter the elements of matrix:\n");
    for(int i=0;i<s1;i++){
        for(int j=0;j<s1;j++)
            scanf("%d",&array[i][j]);
    }
    swap_diagnol(array,s1);
    printf("After swapping matrix is:\n");
    for(int i=0;i<s1;i++){
        for(int j=0;j<s1;j++){
            printf("%3d",array[i][j]);
       }
         printf("\n");
    }
    return 0;
}
void swap_diagnol(int array[][10],int s1)
{
    int a;
    for(int i=0,j=s1-1;i<s1,j>=0;i++,j--){
            a=array[i][i];
            array[i][i]=array[i][j];
            array[i][j]=a;
    }
}
