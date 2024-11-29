// sum of nos from 1 to n using recursion

#include<stdio.h>
int sum(int);
int main()
{
int num;
int res;
printf("enter no till whr u want to find the sum:\n");
scanf("%d",&num);
res=sum(num);
printf("sum of all nos till %d = %d\n",num,res);
}
int sum(int n)
{
if (n==0)
{ return 0; }
return (n + sum(n-1));
}
