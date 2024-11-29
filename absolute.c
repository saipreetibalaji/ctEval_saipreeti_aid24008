#include<stdio.h>
int absolute(int);
int main()
{
int n;
printf("enter number:\n");
scanf("%d",&n);
absolute(n);
}
int absolute(int x)
{
if(x<0)
{
x=(-1)*x;
printf("%d\n",x);
}
else
{
printf("%d\n",x);
}
}
