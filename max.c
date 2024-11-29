#include<stdio.h>
int max(int a,int b,int c);
int main()
{
int a,b,c,maximum;
printf("enter 3 nos:\n");
scanf("%d%d%d",&a,&b,&c);
maximum=max(a,b,c);
printf("the max of given 3 nos: %d\n",maximum);
}
int max(int a,int b,int c)
{
int max=a;
if(b>max)
{
max=b;
}
else { max=a; }
if(c>max)
{
max=c;
}
else { max=a; }
}
