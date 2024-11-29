#include<stdio.h>
int main()
{
int num;
int i=1; 
int sum=0;
printf("enter number:\n");
scanf("%d",&num);
while (i<=num)
{
sum+=i;
i+=2;
}
printf("sum of series=%d\n",sum);
}
