#include<stdio.h>
int main()
{
    int price;
    float sum=0;
    int count=0;
    printf("Enter the price");
    scanf("%d",&price);
    int min=price;
    int max=price;
    while(price!=-1)
    {

        if(price>max)
            max=price;
        if(price<min)
            min=price;

        sum=sum+price;

        count++;
         printf("Enter the price");
        scanf("%d",&price);

        }
    printf("The total bouqets sold are %d\n",count);
    printf("The expensive bouqet sold is %d\n",max);
    printf("The less expensive bouqet sold is %d\n",min);
    printf("The average of bouqets are %f\n",sum/count);



   return 0;
}
