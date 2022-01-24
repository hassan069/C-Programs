#include<stdio.h>
int main()
{
    int array[10];
    int even[10];
    int odd[10];
    int j=0,k=0;

    printf("Enter the array elements:\n");
    for(int i=0;i<5;i++)
        {
          scanf("%d",&array[i]);

        if(array[i]%2==0){
            even[j]=array[i];
            j++;
        }
        else{
            odd[k]=array[i];
            k++;
        }
    }

    printf("The even array is:\n");
    for(int i=0;i<j;i++){
        printf("%d\n",even[i]);
    }

    printf("The odd array is:\n");
    for(int i=0;i<k;i++){
        printf("%d\n",odd[i]);
    }

    return 0;
}
