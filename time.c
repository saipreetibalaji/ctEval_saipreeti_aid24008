#include<stdio.h>
int main()
{
int s;
int m;
int h;
printf("seconds:\n");
scanf("%d",&s);
m=(s)/60;
h=(s)/3600;
printf("seconds is:%d\n",s);
printf("minutes is:%d\n",m);
printf("hours is:%d\n",h);
}
