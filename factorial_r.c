#include<stdio.h>
int find_factorial(int n);
int main()
{
int num,fact;
printf("enter no:\n");
scanf("%d",&num);
fact=fine_factorial(num);
printf("factorial of %d: %d\n",num,fact);
}
int find_factorial(num)
{
if (num==0)
{ return(1); }
return(n*find_factorial(n-1));
}
