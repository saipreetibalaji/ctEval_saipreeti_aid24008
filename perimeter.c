#include<stdio.h>
int perimeter(int);
int main()
{
int a,p;
printf("enter side of square:\n");
scanf("%d",&a);
p=perimeter(a);
printf("perimeter of the square is: %d\n",p);
}
int perimeter(int x)
{
return(4*x);
}
