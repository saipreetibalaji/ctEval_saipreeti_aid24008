#include<stdio.h>
int prime(int);
int main()
{
int n;
printf("enter no:\n");
scanf("%d",&n);
prime(n);
}
int prime(int num)
{
for (i = 2; i <= num / 2; i++)
{
if (num % i == 0)
{
temp++;
break;
}
} 
if (temp == 0 && num != 1)
{
printf("%d is a Prime number", num);
}
else
{
printf("%d is not a Prime number", num);
}
}
