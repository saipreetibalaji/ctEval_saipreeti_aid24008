#include<stdio.h>
char evenOdd(int x);
int main()
{
int x;
char evenodd;
printf("enter no:\n");
scanf("%d",&x);
evenodd = evenOdd(x);
printf("the no is:%c\n",evenodd);
}
char evenOdd(int x)
{
if (x%2==0)
{ evenOdd = 'even'; }
else { evenOdd = 'odd'; }
}
