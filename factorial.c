#include<stdio.h>
int main()
{
int num;
int i=1,r=1;
printf("enter the number:\n");
scanf("%d",&num);
while (i<=num)
{
r=i*r;
i++;
}
printf("factorial of given number = %d\n",r);
}
