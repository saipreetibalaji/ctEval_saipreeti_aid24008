#include<stdio.h>
int main()
{
int rows,i,j;
printf("enter no of rows:\n");
scanf("%d",&rows);
for(i=0;i<rows;i++)
{
  for(j=0;j<rows-i-1;j++)
  {
  printf(" ");
  }
  for(j=0;j<2*i+1;j++)
  {
  printf("*");
  }
printf("\n");
}
}
