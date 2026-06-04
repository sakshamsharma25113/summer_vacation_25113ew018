//Write a program to Check Armstrong number.
#include<stdio.h>
int main()

{
int n,r,sum=0,temp;
printf("enter the number:");
scanf("%d",&n);
temp=n;

while(n>0)
{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
}

if(temp==sum)

   { printf("Entered no is an Armstrong no ");}

else 

{printf("Entered no is not an Armstrong no");}

return 0;
}