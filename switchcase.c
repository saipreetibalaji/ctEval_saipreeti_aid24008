#include<stdio.h>
int main()
{
int a,b;
int s;
int choice;
printf("enter the value of a & b:\n");
scanf("%d%d",&a,&b);
printf("1:addition, 2:subtraction, 3:multiplication, 4:division\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
s=a+b;
printf("%d\n",s);
break;
case 2:
s=a-b;
printf("%d\n",s);
break;
case 3:
s=a*b;
printf("%d\n",s);
break;
case 4:
s=a/b;
printf("%d\n",s);
break;
}
}
