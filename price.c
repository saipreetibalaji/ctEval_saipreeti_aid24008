#include<stdio.h>
int main()
{
float p1,p2,p3,p4,p5;
float totalprice;
printf("enter the price of item1\n");
scanf("%f",&p1);
printf("enter the price of item2\n");
scanf("%f",&p2);
printf("enter the price of item3\n");
scanf("%f",&p3);
printf("enter the price of item4\n");
scanf("%f",&p4);
printf("enter the price of item5\n");
scanf("%f",&p5);
totalprice=p1+p2+p3+p4+p5;
printf("price of item1:%f\n",p1);
printf("price of item2:%f\n",p2);
printf("price of item3:%f\n",p3);
printf("price of item4:%f\n",p4);
printf("price of item5:%f\n",p5);
printf("total amount is:%f\n",totalprice);
}
