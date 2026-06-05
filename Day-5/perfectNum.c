//Write a program to Check perfect number
/*A Perfect Number is a number whose sum of proper divisors 
(excluding the number itself) is equal to the number.*/
#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter the num:");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("The num is perfect num");
    }
    else
    {
        printf("the num is not a perfect num");
    }

    return 0;
}