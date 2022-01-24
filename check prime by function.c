#include<stdio.h>
int power(int x,int y);
int main()
{
   int x;
   int y;
   printf("Enter the value of x");
   scanf("%d",&x);
   printf("Enter the value of y");
   scanf("%d",&y);

   int result=power(x,y);
   printf("The power of %d is %d",x,result);

   return 0;
 }

int power(int x,int y)
{
    int a=1;
    for(int i=1;i<=y;i++){
        a=x*a;
    }
    return a;
}
