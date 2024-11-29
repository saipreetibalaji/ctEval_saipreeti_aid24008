#include<stdio.h>
int square(int);
int main()
{
int num, res;
printf("enter a no:\n");
scanf("%d",&num);
res=square(num);
printf("sqaure of %d = %d\n",num,res);
}
int sqaure(int x)
{
return(x*x);
}
