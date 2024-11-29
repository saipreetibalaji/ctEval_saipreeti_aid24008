#include<stdio.h>
int main()
{
int n;
printf("enter number till which you want to print even nos:\n");
scanf("%d",&n);
int i;
for(i=0;i<=n;i+=2)
{
printf("%d\n",i);
}
}
