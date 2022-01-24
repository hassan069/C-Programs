#include<stdio.h>
int main()
{
    int a;  //side 1
    int b;  //side 2
    int c;  //side 3

    printf("Enter the value of a");
    scanf("%d",&a);

    printf("Enter the value of b");
    scanf("%d",&b);

    printf("Enter the value of c");
    scanf("%d",&c);

    if(a==b && b==c && c==a ){
        printf("The triangle is equilateral");
    }

    else if(a==b || b==c || c==a){
        printf("The triangle is scalene");
    }

    else{
     printf("The triangle is isoscelese");
    }

     return 0;
}
