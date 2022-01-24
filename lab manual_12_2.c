#include<stdio.h>
void createArray(int *array,int n);
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);

    int array[n];

    createArray(array,n);
    for(int j=0;j<n;j++){
        printf("The %d element of array is:%d\n",j+1,*(array+j));
    }

    return 0;
}
void createArray(int *array,int n)
{
    printf("Enter the value of array");
    for(int i=0;i<n;i++){
        scanf("%d",(array+i));
    }
}

