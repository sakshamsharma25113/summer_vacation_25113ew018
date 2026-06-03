//Write a program to Check whether a number is prime.
#include<stdio.h>

int main()
{
    int n, prime = 1, i;

    printf("Enter the number greater than 1: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("%d is not prime", n);
        return 0;
    }

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 1)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);

    return 0;
}