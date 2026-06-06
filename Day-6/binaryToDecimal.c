//Write a program to Convert binary to decimal.
#include<stdio.h>
int main()
{
    int binary,decimal=0,base=1,r;

    printf("enter the binary num:");
    scanf("%d",&binary);

    while(binary>0)
    {
        r=binary%2;
        decimal=decimal+r*base;
        base=base*2;
        binary=binary/10;
    }
     printf("Decimal=%d",decimal);

     return 0;
}