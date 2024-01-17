#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10, b=15;
    printf("value of a is=%d\n",a);
    printf("value of b is=%d\n",b);
    int z;
    z=!(a>b);
    printf("updated Value of z is=%d\n",z);
    z=!(!(!(!(a>b))));
    printf("updated value of z is=%d\n",z);
}