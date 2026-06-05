//Write a program to Find largest prime factor.
#include<stdio.h>

int main()
{
    int n, i, j, flag, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)   // i is a factor
        {
            flag = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
            {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
