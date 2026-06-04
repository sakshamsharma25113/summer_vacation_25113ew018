//Write a program to Print Armstrong numbers in a range.
#include<stdio.h>

int main()
{
    int start, end, n, r, sum, temp;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(n = start; n <= end; n++)
    {
        temp = n;
        sum = 0;

        while(temp > 0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}