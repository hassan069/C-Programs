#include<stdio.h>
void func(int a,int b,float *sum,float *avg);
int main()
{
    int a=4;
    int b=5;
    float sum;
    float avg;
    func(a,b,&sum,&avg);
    printf("The sum is %f",sum);
    printf("The average is %f",avg);
    return 0;
}
void func(int a,int b,float *sum,float *avg)
{
   *sum=a+b;
   *avg=*sum/2;

}
