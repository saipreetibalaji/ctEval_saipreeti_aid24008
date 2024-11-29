#include<stdio.h>
int main()
{
int a1,a2,a3,a4;
int s1,s2,s3,s4;
printf("enter the four angles:\n");
scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
printf("enter the four sides:\n");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
if (a1==90 && a2==90 && a3==90 & a4==90)
{ 
  if (s1==s2 && s1==s3 && s1==s4)
  { printf("it is a square\n"); }
  else if (s1==s3 && s2==s4)
  { printf("it is a rectangle\n"); }
  else { printf("neither a square nor a reactangle\n"); }
}
else
{ printf("neither a square nor a reactangle\n"); }
}
