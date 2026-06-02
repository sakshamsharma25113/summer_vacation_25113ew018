//WAP to find factorial of a given number
#include<stdio.h>
int main()
{
int fac=1,i,n;
printf("enter the number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
    
    fac=fac*i;


}

printf("factorial of a %d is %d",n,fac);
return 0;

}