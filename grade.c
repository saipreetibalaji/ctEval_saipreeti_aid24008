#include<stdio.h>
int main()
{
int marks;
printf("enter marks:\n");
scanf("%d",&marks);
if (marks>80)
{ printf("A grade\n"); }
else if (marks>60 && marks<=80)
{ printf("B grade\n"); }
else if (marks>40 && marks<=60)
{ printf("C grade\n"); }
else
{ printf("F grade\n"); }
}
