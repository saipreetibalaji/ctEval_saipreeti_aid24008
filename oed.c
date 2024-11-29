#include<stdio.h>
int main()
{
int num;
printf("enter no:\n");
scanf("%d",&num);
if (num%2==0)
{ if (num%6==0)
  { printf("%d is both even n div by 6\n",num); }
  else { printf("%d is only even\n",num); }
}
else 
{ if (num%5==0)
  { printf("%d is odd n div by 5\n",num); }
  else { printf("%d is only odd\n",num); }
}
}
