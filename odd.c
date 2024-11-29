#include<stdio.h>
int main()
{
int n;
printf("enter number till which you want to print the odd nos:\n");
scanf("%d",&n);
int i;
for(i=1;i<=n;i=i+2)
{
printf("%d\n",i);
}
}
