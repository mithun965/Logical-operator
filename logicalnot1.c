#include<stdio.h>
#include<conio.h>
int main()
{
    int a=!5,z;
    printf("Value of a is=%d\n",a);
    z=!(!(!a));
    printf("Updated Value of a is=%d\n",z);
    printf("End of program");
}