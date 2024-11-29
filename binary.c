#include<stdio.h>
int bin(int);
int main()
{
int num;
printf("enter the decimal no you want to convert to binary:\n");
scanf("%d",&num);
bin(num);
}
int bin(int x)
{
int r,q;
while(x>=1)
{
r=x%2;
printf("%d",r);
q=x/2;
x=q;
}
}
