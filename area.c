#include<stdio.h>
int area(int);
int main()
{
int a,area_sq;
printf("enter side of sqaure:\n");
scanf("%d",&a);
area_sq=area(a);
printf("area of square:%d\n",area_sq);
}
int area(int x)
{
return(x*x);
}
