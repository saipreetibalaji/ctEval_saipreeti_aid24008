#include<stdio.h>
int main()
{
int choice;
printf("1:sunday, 2:monday, 3:tuesday, 4:wednesday, 5:thursday, 6:friday, 7:saturday\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("sunday\n");
break;
case 2:
printf("monday\n");
break;
case 3:
printf("tuesday\n");
break;
case 4:
printf("wednesday\n");
break;
case 5:
printf("thursday\n");
break;
case 6:
printf("friday\n");
break;
case 7:
printf("saturday\n");
break;
}
}
