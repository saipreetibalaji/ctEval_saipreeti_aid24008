#include<stdio.h>
int main()
{
int num,n,remainder,result=0;
printf("enter a three digit number\n");
scanf("%d",&num);
n=num;
while (n != 0)
{
remainder = n%10;
result += remainder*remainder*remainder;
n /= 10;
}
if (result==num)
{ printf("%d is an armstrong number\n",num); }
else 
{ printf("%d is not an armstrong number\n",num); }
}
