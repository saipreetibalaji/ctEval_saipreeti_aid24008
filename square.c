#include<stdio.h>
int square(int);
int main()
{
int num,r;
printf("enter no:\n");
scanf("%d",&num);
r=square(num);
printf("square of %d: %d\n",num,r);
}
int square(int x)
{
return(x*x);
}
