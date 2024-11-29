#include<stdio.h>
int factorial(int);
int main()
{
int num;
printf("enter number:\n");
scanf("%d",&num);
factorial(num);
}
int factorial(int x)
{
int i=1,r=1;
while(i<=x)
{
r=i*r;
i++;
}
printf("factorial of %d is: %d\n",x,r);
}
