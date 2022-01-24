#include<stdio.h>
int isprime(int num);
int main()
{
  int num;
  int result;
  printf("Enter the number");
  scanf("%d",&num);
  result=isprime(num);
  if(result==1)
    printf("Prime");
  else
    printf("Not a prime");

   return 0;
}
 int isprime(int num)
 {
     for(int i=2;i<num;i++)
     {
         if(num%i==0)
            return 0;
         }
       return 1;

 }
