#include<stdio.h>
typedef struct{
    float real;
    float imaginary;
     }complex;

complex add(complex n1,complex n2);
complex substract(complex n1,complex n2);
complex multiply(complex n1,complex n2);

int main()
{
    complex n1,n2,n3,n4,n5;

    printf("Enter the real part of n1");
    scanf("%f",&n1.real);

    printf("Enter the imaginary part of n1");
    scanf("%fi",&n1.imaginary);

    printf("Enter the real part of n2");
    scanf("%f",&n2.real);

    printf("Enter the imaginary part of n2");
    scanf("%fi",&n2.imaginary);

    n3=add(n1,n2);
    printf("%f%fi\n",n3.real,n3.imaginary);

    n4=substract(n1,n2);
    printf("%f%fi\n",n4.real,n4.imaginary);

    n5=multiply(n1,n2);
    printf("%f%fi",n4.real,n4.imaginary);

    return 0;
}
complex add(complex n1,complex n2)
{
    complex n3;
    n3.real=n1.real+n2.real;
    n3.imaginary=n1.imaginary+n2.imaginary;

    return n3;
}
complex substract(complex n1,complex n2)
{
    complex n4;
    n4.real=n1.real-n2.real;
    n4.imaginary=n1.imaginary-n2.imaginary;

    return n4;
}
complex multiply(complex n1,complex n2)
{
    complex n5;

    n5.real=((n1.real*n2.real))+((n1.imaginary)*(n2.imaginary));
    n5.imaginary=((n1.imaginary)*(n2.real))+((n1.real)*(n2.imaginary));

    return n5;
}

