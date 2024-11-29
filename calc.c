#include<stdio.h>
int calc(int,int);
int main()
{
int n1,n2;
printf("enter 2 numbers n1 & n2:\n");
scanf("%d%d",&n1,&n2);
calc(n1,n2);
}
int calc(int x,int y)
{
int r;
int choice;
printf("operations- 1:addition, 2:subtraction, 3:multiplication, 4:division\n");
printf("enter the operation to be performed:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
r=x+y;
printf("%d\n",r);
break;
case 2:
r=x-y;
printf("%d\n",r);
break;
case 3:
r=x*y;
printf("%d\n",r);
break;
case 4:
r=x/y;
printf("%d\n",r);
break;
}
}
