//Write a program to Check strong number.
/*A Strong Number is a number whose sum of the factorials of
 its digits is equal to the number itself.*/
#include<stdio.h>
int main()

{
    int n,i,r,sum=0,temp,fact;
    printf("Enter the num:");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        fact=1;

        for(i=1;i<=r;i++)

        {
            fact= fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }

        if(sum==temp)
        {
            printf("The num is a strong num");
        }
        else
        {
            printf("The num is not a strong num");
        }

    

    return 0;
}