#include<stdio.h>

int main()
{
    int n, temp, r, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;

        fact = 1;
        for(i = 1; i <= r; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }

    return 0;
}