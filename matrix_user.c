#include<stdio.h>
int main()
{
int i,j;
int rows,columns;
printf("enter no of rows & columns:\n");
scanf("%d%d",&rows,&columns);
for(i=1;i<=rows;i++)
{
  for(j=1;j<=columns;j++)
  {
  printf("(%d,%d)\t",i,j);
  }
printf("\n");
}
}
