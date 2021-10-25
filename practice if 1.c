#include<stdio.h>
int main()
{
    int phy,math,chem;
    float total;
    printf("enter the number of phy");
    scanf("%d",&phy);
    printf("enter the number of chem\n");
    scanf("%d",&chem);
    printf("enter the marks of math");
    scanf("%d",&math);
    total=(phy+chem+math)/3;

    if((total<40) || phy<33 || chem<33 || math<33){
        printf("your percentage is %f and you were fail",total);
    }
        else{

            printf("your percentage is %f and you were pass",total);
        }
        return 0;
}
