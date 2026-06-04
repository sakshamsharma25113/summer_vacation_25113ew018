//Write a program to Find nth Fibonacci term.	TCS, Infosys, Wipro
#include<stdio.h>
int main()

{
    int n,i,f1,f2,f3;
    printf("enter no of terms:");
    scanf("%d",&n);
    f1=0;
    f2=1;
     if(n == 1)
        printf("nth term is %d", f1);
    else if(n == 2)
        printf("nth term is %d", f2);
        else
        {


    for(i=1;i<=n-2;i++)

    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        
    }
    printf("nth term is %d",f3);
}

    return 0;
}