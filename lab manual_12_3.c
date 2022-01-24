#include<stdio.h>
void createArray(int *array,int size);
int set_intersection(int *a,int *b,int *c,int s1,int s2);
int main()
{
    int s1,s2,d;
    int a[20],b[20],c[20];

    printf("Enter the size s1:\n");
    scanf("%d",&s1);
    printf("Enter the values of array a:\n");
    createArray(a,s1);

    printf("Enter the size s2:\n");
    scanf("%d",&s2);
    printf("Enter the values of array b:\n");
    createArray(b,s2);

    d=set_intersection(a,b,c,s1,s2);

    printf("The intersection is:\n");
    for(int j=0;j<d;j++){
    printf("%d\n",*(c+j));
    }

    return 0;
}
void createArray(int *array,int size)
{
     for(int i=0;i<size;i++){
        scanf("%d",(array+i));
    }
}
int set_intersection(int *a,int *b,int *c,int s1,int s2)
{
    int k=0;

    for(int j=0;j<s1;j++)
      {
        for(int i=0;i<s2;i++)
           {
             if(a[j]==b[i]){
                c[k]=a[j];
                  k++;
            }
        }
    }
         return k;
}

