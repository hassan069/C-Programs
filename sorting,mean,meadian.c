#include<stdio.h>
void getSort(int arr[]);
void getMean(int arr[],float *a);
void getMedian(int arr[],int size,float *b);
int main()
{
    int arr[10],size;
    float a,b;

    printf("Enter the size of array");
    scanf("%d",&size);

    printf("Enter the values of array");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    getSort(arr);
    printf("After sorting array is");
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);

    getMean(arr,&a);
    printf("\n The mean is %f\n",a);

    getMedian(arr,size,&b);
    printf("The median is %f",b);

    return 0;
}
void getSort(int arr[])
{
   for(int j=0;j<10-1;j++){
        for(int i=0;i<10-1;i++){
                int c;
            if(arr[i]>arr[i+1]){
                c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }
}
void getMean(int arr[],float *a)
{
  float sum=0;
  int i=0;
    for(i=0;i<10;i++){
        sum=sum+arr[i];
   }
    *a=sum/i;
}
void getMedian(int arr[],int size,float *b)
{
    if(size%2==0){
        *b=(arr[(size-1)/2]+arr[size/2])/2.0;
    }
    else{
        *b=arr[size/2];
    }
}
