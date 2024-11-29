// factorial using recursion

#include<stdio.h>
int factorial(int n);
int main()
{
int num;
int fact;
printf("enter no:\n");
scanf("%d",&num);
fact=factorial(num);
printf("factorial of %d is: %d\n",num,fact);
}
int factorial(int n)
{
if(n==0)
{
return(1);
}
return(n*factorial(n-1));
}
