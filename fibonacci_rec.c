// fibonacci using recursion

#include<stdio.h>
int fibonacci(int);
int main()
{
int num;
int i;
printf("enter the no of elements u want the series till:\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{ printf("%d\t",fibonacci(i)); }
}
int fibonacci(int i)
{
if(i==0)
{ return(0); }
else if(i==1)
{ return(1); }
else
{ return(fibonacci(i-1)+fibonacci(i-2)); }
}
