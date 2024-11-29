#include<stdio.h>
void swap(int,int);
int main()
{
int a,b,t;
printf("enter values of a & b:\n");
scanf("%d%d",&a,&b);
printf("before swapping: num1=%d, num2=%d\n",a,b);
swap(a,b);
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping: num1=%d, num2=%d\n",a,b);
}
