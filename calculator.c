#include<stdio.h>
int main()
{
int a,b;
int out;
int operator;
printf("enter value for a and b:\n");
scanf("%d%d",&a,&b);
printf("1:addition, 2:subtraction, 3:multiplication, 4:division\n");
printf("enter your choice of operation:\n");
scanf("%d",&operator);
if (operator == 1)
{ out=a+b;
  printf("%d\n",out);
}
else if (operator == 2)
{ out=a-b;
  printf("%d\n",out);
}
else if (operator == 3)
{ out=a*b;
  printf("%d\n",out);
}
else if (operator == 4)
{ out=a/b;
  printf("%d\n",out);
}
else
{ printf("invalid operator\n"); }
}
