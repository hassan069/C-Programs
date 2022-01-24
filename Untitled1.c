#include<stdio.h>
struct distance{
    int feet;
    int inches;
     };
int main()
{
    int a,b;
    struct distance s1,s2,s3;
    scanf("%d",&s1.feet);

    scanf("%d",&s1.inches);

    scanf("%d",&s2.feet);

    scanf("%d",&s2.inches);

    s3.feet=s1.feet+s2.feet;
    s3.inches=s1.inches+s2.inches;

    if(s3.inches>=12){

        a=s3.inches/12.0;
        printf("a %d\n",a);
        s3.feet=a+s3.feet;

        b=(s3.inches)% 12;
       s3.inches=b;
    }
    printf("%d\n",s3.inches);
    printf("%d",s3.feet);

}
