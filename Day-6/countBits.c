//Write a program to Count set bits in a number.
/*A set bit means a bit whose value is 1
 in the binary representation of a number.*/
#include<stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }

    printf("Set bits = %d", count);

    return 0;
}