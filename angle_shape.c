#include<stdio.h>
int main()
{
int a1,a2,a3,a4;
printf("enter the four angles:\n");
scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
if (a1==90 && a2==90 && a3==90 && a4==90)
{ printf("its either a square or a rectangle\n"); }
else 
{ printf("its neither a square nor a rectangle\n"); }
}
