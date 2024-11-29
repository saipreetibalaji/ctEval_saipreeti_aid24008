#include<stdio.h>
int main()
{
int si;
int ci;
int p;
int r;
int t;
printf("principle amt:\n");
scanf("%d",&p);
printf("rate:\n");
scanf("%d",&r);
printf("time:\n");
scanf("%d",&t);
si=(p*r*t)/100;
printf("principle amt is:%d\n",p);
printf("rate is:%d\n",r);
printf("time is:%d\n",t);
printf("simple interest:%d\n",si);
}
