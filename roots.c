#include<stdio.h>
#include<math.h>
int main()
{
int d;
int a,b,c;
int x;
int choice;
printf("enter value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
printf("1:root1, 2:root2\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
x=(-b+d)/(2*a);
printf("%d\n",x);
break;
case 2:
x=(-b-d)/(2*a);
printf("%d\n",x);
break;
}
}
