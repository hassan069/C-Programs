#include<stdio.h>
int main()
{
    int units;
    float bill;
    int tax;

    printf("Enter the units");
    scanf("%d",&units);

    if(units>=1 && units<=100){
        int rate=2,a;
        a=rate*units;
        tax=0.1*a;
        bill=a+tax;
        printf("The bill is %f",bill);
      }
       if(units>100 && units<=200){
        int rate=3,b;
        b=rate*(units-100);
        tax=0.2*b;
        bill=100*2+b+tax;
        printf("The bill is %f",bill);
      }
      if(units>200){
        int rate=5,c;
        c=rate*(units-200);
        tax=0.5*c;
        bill=100*2+100*3+c+tax;
        printf("The bill is %f",bill);
      }

    return 0;

}
