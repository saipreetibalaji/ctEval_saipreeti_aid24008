#include<stdio.h>
int main()
{
int a=0,b=1;
int n,next;
printf("enter number\n");
scanf("%d",&n);
int i=1;
while (i <= n)
{
if (i==1)
{ printf("%d\n",a); }
else if (i==2)
{ printf("%d\n",b); }
else 
{ next=a+b;
printf("%d\n",next);
a=b;
b=next; }
i++;
}
}
