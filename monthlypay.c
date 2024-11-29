#include<stdio.h>
int main()
{
int monthly_pay;
int hrs;
int n_weeks;
int rate;
printf("hours worked in a week:\n");
scanf("%d",&hrs);
printf("rate per hr:\n");
scanf("%d",&rate);
printf("no of weeks in a month:\n");
scanf("%d",&n_weeks);
monthly_pay=(hrs)*(rate)*(n_weeks);
printf("hrs worked in a week:%d\n",hrs);
printf("rate per hr:%d\n",rate);
printf("no of weeks in a month:%d\n",n_weeks);
printf("monthly pay is:%d\n",monthly_pay);
}
